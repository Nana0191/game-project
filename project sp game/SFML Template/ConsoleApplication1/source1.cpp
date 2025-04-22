#include"newheader.h"
#include"FileName.h"




selectPlayer Ayhaga;

void game::Start(RenderWindow& window)
{

   
    startstructfunction(window);
 
    startfunctionforkeybindings();
  /*  if(pagenumber==3)
    Ayhaga.Startselectplayer();*/
   
   if(pagenumber==4)
       loadfile();
   
   



}
void game::Update(RenderWindow& window, View& view)
{


    mousepos = window.mapPixelToCoords(((Mouse::getPosition(window))));
 /*   Ayhaga.Updateselectplayer(window);*/
    if (subpage == 0) {
        buttonexitexist = true;
    }
    else
        buttonexitexist = false;



    if (subpage == 1)
    {
        subpage1exist = true;
    }
    else
        subpage1exist = false;

    while (window.pollEvent(event))
    {


        handelupdate(window,view);
      /*  if (pagenumber == 3)
        Ayhaga.updateselectplayer2(mousepos);*/

    }

    handelbackground();





}




void game::sliderhandel(Sprite& knot, Sprite& slider, Sound& sound, int n, int& volumee, float& newvolume)

{
    float minposition = slider.getPosition().x;
    float maxposition = minposition + slider.getGlobalBounds().width - knot.getGlobalBounds().width;
    float newposition = mousepos.x;  // new position for the knot
  
        if (newposition < minposition) {
            newposition = minposition;
        }
        else   if (newposition > maxposition) {
            newposition = maxposition;
        }
    
      
    knot.setPosition(newposition, knot.getPosition().y);
    newvolume = ((newposition - minposition) / (maxposition - minposition) * 100);  //to ensure that volume between 0 to 100
    volumee = newvolume;
    sound.setVolume(volumee);
    textarray[n].setString(to_string(volumee) + "%");
    
}
void game::startfunctionforkeybindings() {   //by default
    keybinds[keybinding1] = Keyboard::Up;
    keybinds[keybinding2] = Keyboard::Down;
    keybinds[keybinding3] = Keyboard::Left;
    keybinds[keybinding4] = Keyboard::Right;
    keybinds[keybinding5] = Keyboard::Escape;   //for pause
    keybinds[keybinding6] = Keyboard::Space;
    keybinds[keybinding7] = Keyboard::Enter;  //for interacting with npcs  
    newvolume = sliderstart(knotsprite, slidersprite);
    volume = newvolume;
    newvolume2 = sliderstart(knotsprite2, slidersprite2);
    volume2 = newvolume2;
    soundassests.setVolume(volume2);
    soundbackground.setVolume(volume);
    textarray[1].setString(to_string(volume) + "%");
    textarray[3].setString(to_string(volume2) + "%");
    for (int i = 0;i < keybindings;i++) {
        keybindingsarray[i].text.setFont(menufont);
        keybindingsarray[i].text.setFillColor(Color(210, 210, 210));
        keybindingsarray[i].text.setCharacterSize(25);
    }    for (int i = 1;i < keybindings - 1;i++) {
        keybindingsarray[i].menusprite.setTexture(keybutton);
        keybindingsarray[i].menusprite.setScale(0.4, 0.4);
    }
    keybindingsarray[0].text.setString("key binds");
    keybindingsarray[3].text.setString("right");
    keybindingsarray[4].text.setString("left");
    keybindingsarray[5].text.setString("W");
    keybindingsarray[6].text.setString("S");
    keybindingsarray[7].text.setString("D");
    keybindingsarray[8].text.setString("A");
    keybindingsarray[9].text.setString("Esc");
    keybindingsarray[10].text.setString("P");
    keybindingsarray[11].text.setString("space");
    keybindingsarray[1].text.setString("up");
    keybindingsarray[2].text.setString("down");
    keybindingsarray[12].text.setString("F");
    keybindingsarray[13].text.setString("enter");
    keybindingsarray[14].text.setString("E");
    keybindingsarray[15].text.setString("set by default");
    keybindingsarray[0].menusprite.setTexture(button2);
    keybindingsarray[11].menusprite.setScale(0.5, 0.4);
    keybindingsarray[0].menusprite.setScale(0.5, 0.5);
    keybindingsarray[13].menusprite.setScale(0.5, 0.4);
    keybindingsarray[15].menusprite.setScale(0.4, 0.4);
}

void game::handelkeybindings() {
    if (Mouse::isButtonPressed(Mouse::Left))
    {
        if (keybindingsarray[1].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding1] = Keyboard::Up;
            soundassests.play();
        }
        if (keybindingsarray[2].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding2] = Keyboard::Down;
            soundassests.play();
        }if (keybindingsarray[3].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding3] = Keyboard::Right;
            soundassests.play();
        }if (keybindingsarray[4].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding4] = Keyboard::Left;
            soundassests.play();
        }
        if (keybindingsarray[5].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding1] = Keyboard::W;
            soundassests.play();
        }if (keybindingsarray[6].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding2] = Keyboard::S;
            soundassests.play();
        }if (keybindingsarray[7].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding3] = Keyboard::A;
            soundassests.play();

        }if (keybindingsarray[8].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding4] = Keyboard::D;
            soundassests.play();
        }
        if (keybindingsarray[9].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding5] = Keyboard::Escape;
            soundassests.play();
        }if (keybindingsarray[10].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding5] = Keyboard::P;
            soundassests.play();
        }
        if (keybindingsarray[11].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding6] = Keyboard::Space;
            soundassests.play();
        }
        if (keybindingsarray[12].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding6] = Keyboard::F;
            soundassests.play();
        }
        if (keybindingsarray[13].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding7] = Keyboard::Enter;
            soundassests.play();
        }
        if (keybindingsarray[14].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding7] = Keyboard::E;
            soundassests.play();
        }

        if (keybindingsarray[15].menusprite.getGlobalBounds().contains(mousepos))
        {
            keybinds[keybinding1] = Keyboard::Up;
            keybinds[keybinding2] = Keyboard::Down;
            keybinds[keybinding3] = Keyboard::Right;
            keybinds[keybinding4] = Keyboard::Left;
            keybinds[keybinding5] = Keyboard::Escape;
            keybinds[keybinding6] = Keyboard::Space;
            keybinds[keybinding7] = Keyboard::Enter;
            soundassests.play();

        }



    }

}



void  game::handelupdate(RenderWindow& window,View&view) {
    cursorsprite.setPosition(mousepos.x, mousepos.y);
    for (int i = 12;i < 14;i++) {
        if (textarray[i].getGlobalBounds().contains(mousepos)) {
            textarray[i].setFillColor(Color(50, 0, 50));
            if (Mouse::isButtonPressed(Mouse::Left)) {
                if (textarray[12].getGlobalBounds().contains(mousepos))
                {
                    savedata();
                    ifsaved = true;

                }
                else
                    ifsaved = false;
                writesaved();
                    window.close();
                
            }
        }
        else

            textarray[i].setFillColor(Color(210,210,210));
    }
    if (event.type == Event::Closed) {
        window.close();
    }
    for (int i = 0;i < 5;i++) {

        if (menuarray[i].menusprite.getGlobalBounds().contains(mousepos))
            menuarray[i].text.setFillColor(Color(50, 0, 50));
        else

            menuarray[i].text.setFillColor(Color(210, 210, 210));
    }

    if (menuarray[2].menusprite.getGlobalBounds().contains(mousepos) && buttonexitexist && subpage1exist == false) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
         
            soundassests.play();
            notificatio = true;  //for saving progress
         

        }
    } if (menuarray[3].menusprite.getGlobalBounds().contains(mousepos) && buttonexitexist==false && subpage1exist&&pagenumber==1 ) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
            windowresize(window, view, true);
            soundassests.play();
          


        }
    }

    if (menuarray[4].menusprite.getGlobalBounds().contains(mousepos) && buttonexitexist == false && subpage1exist&& pagenumber == 1) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
            windowresize(window, view,false);
            soundassests.play();



        }
    }
    if (menuarray[0].menusprite.getGlobalBounds().contains(mousepos) && buttonexitexist && subpage1exist == false) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
            soundassests.play();
            pagenumber++;

        }
    }



    if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) {
        if (knotsprite.getGlobalBounds().contains(mousepos))
            dragging = true;
        if (knotsprite2.getGlobalBounds().contains(mousepos))
            dragging2 = true;



    }
    if (event.type == Event::MouseButtonReleased && event.mouseButton.button == Mouse::Left)
    {
        dragging = false;
        dragging2 = false;
    }

    if (dragging) {
        sliderhandel(knotsprite, slidersprite, soundbackground, 1, volume, newvolume);
    }
    if (dragging2) {

        sliderhandel(knotsprite2, slidersprite2, soundassests, 3, volume2, newvolume2);

       /* soundassests.setVolume(volume2);*/
    }


    if (keybindingsarray[0].menusprite.getGlobalBounds().contains(mousepos)) {
        keybindingsarray[0].text.setFillColor(Color(50, 0, 50));
        if (Mouse::isButtonPressed(Mouse::Left) && subpage1exist) {
            subpage = 2;
            soundassests.play();
        }
    }

    

    else
        keybindingsarray[0].text.setFillColor(Color(210, 210, 210));
    for (int i = 0;i < 3;i++) {
        if (arraystart[i].getGlobalBounds().contains(mousepos)) {
            arraystart[i].setFillColor(Color(50, 0, 50));
            if (Mouse::isButtonPressed(Mouse::Left)&&pagenumber==2) {
                if (i == 0)
                    pagenumber=3;  
                if (i == 1)
                    pagenumber = 4;
                if (i == 2)
                    pagenumber = 5;
              
                soundassests.play();
            }
        }
        else
            arraystart[i].setFillColor(Color(160, 160, 160));
    }
   

    for (int i = 1;i < keybindings;i++)
    {

        if (keybindingsarray[i].text.getGlobalBounds().contains(mousepos)) {
            keybindingsarray[i].text.setFillColor(Color(50, 0, 50));
        }


        else
            keybindingsarray[i].text.setFillColor(Color(210, 210, 210));

    }


    if (subpage == 2 && returnbutton.getGlobalBounds().contains(mousepos))
    {
        returnbutton.setScale(0.7, 0.7);
        if (event.type == Event::MouseButtonPressed && event.key.code == Mouse::Left) {
            subpage--;
            soundassests.play();

        }


    }
    else
        returnbutton.setScale(0.5, 0.5);
    if (subpage == 1 && returnbutton.getGlobalBounds().contains(mousepos) && subpage1exist) {

        returnbutton.setScale(0.7, 0.7);
        if (Mouse::isButtonPressed(Mouse::Left) && subpage == 1) {
            subpage--;
            soundassests.play();
        }


    }
    else
        returnbutton.setScale(0.5, 0.5);
    handelkeybindings();
    if (menuarray[1].menusprite.getGlobalBounds().contains(mousepos) && subpage == 0 && buttonexitexist) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
            subpage++;
            soundassests.play();


        }
    }
      
     
    if (exiticon.getGlobalBounds().contains(mousepos) && Mouse::isButtonPressed(Mouse::Left)) {

        notificatio = true;
        soundassests.play();
    }
    
    if (settingsicon.getGlobalBounds().contains(mousepos) && Mouse::isButtonPressed(Mouse::Left)) {
        soundassests.play();
        subpage = 1;
    }
    
    if (buttonreturn.getGlobalBounds().contains(mousepos) && Mouse::isButtonPressed(Mouse::Left)) {
        soundassests.play();
      if (pagenumber == 2)
            pagenumber=1;
      if(pagenumber==3)
           pagenumber=2;
       if (pagenumber == 4)
          pagenumber = 2;
       if (pagenumber == 5)
           pagenumber = 2;

    }



}

int game::sliderstart(Sprite& knot, Sprite& slider) {
    int   min = slider.getPosition().x;

    return ((knot.getPosition().x - min) / (slider.getGlobalBounds().width - 100) * 100);

}
void game::savedata() {

    gamesave gamesave;
    gamesave.volume = volume;
    gamesave.volume2 = volume2;
    gamesave.positionknotX = knotsprite.getPosition().x;
    gamesave.positionknoty = knotsprite.getPosition().y;
    gamesave.positionknotX2 = knotsprite2.getPosition().x;
    gamesave.positionknoty2 = knotsprite2.getPosition().y;
    // now save keys cannot save it as keyboard we change them to integers
    int i = 0;
    for (const auto& pair : keybinds)  // to automaticly move on every key we made 
    {
        if (i < keybindsnumbers)  //to be still on our bounded array
           gamesave.keybinds[i++] = static_cast<int>(pair.second);   //to cahnge allkeybopard keys to numbrs

    }
    
    ofstream outputfile("save.txt",ios::binary);  //save it as binary data
    if (outputfile.is_open()) {

   outputfile.write(reinterpret_cast<char*>(&gamesave), sizeof(gamesave)); // here goes to the location of &data the compier consider it as array of char  as bytes of binary
     //   to calculate how many the compiler write from the size of the datastrucutre
          outputfile.close();
    }
   
}


void  game::loadfile() {

   
    gamesave gamesave;
    ifstream inputfile("save.txt",ios::binary);
    if (inputfile.is_open()) {
        inputfile.read(reinterpret_cast<char*>(&gamesave), sizeof(gamesave));  //to open what we saved
        inputfile.close();
        volume = gamesave.volume;
        volume2 = gamesave.volume2;
        knotsprite.setPosition(gamesave.positionknotX, gamesave.positionknoty);
        knotsprite2.setPosition(gamesave.positionknotX2, gamesave.positionknoty2);
        int i = 0;
        for (auto& pair : keybinds) {  //canot put const because here we change in them 
            pair.second  = static_cast<Keyboard::Key> (gamesave.keybinds[i++]);
        }
        
    }
 
   
   soundbackground.setVolume(volume);
    textarray[1].setString(to_string(volume) + "%");
    soundassests.setVolume(volume2);
    textarray[3].setString(to_string(volume2) + "%");


   
   


} 
bool game:: readsaved() {
    ifstream inputfile("savedata.txt");
    if (inputfile.is_open()) {
        inputfile>> ifsaved;
        inputfile.close();
    }
    return ifsaved;
}
void game::writesaved() {
    ofstream outputfile("savedata.txt");
    if (outputfile.is_open()) {
        outputfile<< ifsaved;
        outputfile.close();
    }

}




