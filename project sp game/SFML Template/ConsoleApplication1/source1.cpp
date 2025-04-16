#include"newheader.h"







void game::Start(RenderWindow& window)
{

   
    startstructfunction(window);
 
    startfunctionforkeybindings();
   



}
void game::Update(RenderWindow& window, View& view)
{


    mousepos = window.mapPixelToCoords(((Mouse::getPosition(window))));
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

    }

    handelbackground();





}
void game::Draw(RenderWindow& window)
{

    window.clear();


    if (pagenumber == 1 && subpage == 0 || (pagenumber == 1 && subpage == 1) || (pagenumber == 1 && subpage == 2)) {
        window.draw(backgroundsprite);
        window.draw(cloud1sprite);
        window.draw(cloud2sprite);
        window.draw(word1sprite);
        window.draw(word2sprite);
        window.draw(star1);
        window.draw(star2);
        window.draw(groundsprite1);
        window.draw(groundsprite2);
        window.draw(groundsprite3);
        window.draw(standsprite);
        window.draw(stonesprite1);
        window.draw(stonesprite2);
        window.draw(portal);
        window.draw(tree1);
        window.draw(tree2);
        window.draw(sign);
        window.draw(beginplayer);
        for (int i = 0;i < 3;i++) {
            window.draw(menuarray[i].menusprite);
        }

        for (int i = 0;i < 3;i++) {
            window.draw(menuarray[i].text);
        }
       
    }
    if (notificatio &&pagenumber==1&&subpage==0) {
        window.draw(exitnote);
        for (int i = 12;i < 14;i++)
        {
            window.draw(textarray[i]);
        }
    }
    if (subpage == 1) {
        window.draw(settingsstruct.menusprite);
        window.draw(keybindingsarray[0].menusprite);
        window.draw(keybindingsarray[0].text);
        for (int i = 0;i < 5;i++) {
            window.draw(textarray[i]);

        }
        for (int i = 3;i < 5;i++) {
            window.draw(menuarray[i].menusprite);
            window.draw(menuarray[i].text);

        }
        window.draw(textarray[14]);
        window.draw(slidersprite);
        window.draw(knotsprite);
        window.draw(slidersprite2);
        window.draw(knotsprite2);
        window.draw(returnbutton);


    }
    if (subpage == 2) {

        window.draw(settingsstruct.menusprite);
        window.draw(returnbutton);
        for (int i = 5;i < 12;i++) {
            window.draw(textarray[i]);

        } 
        for (int i = 1;i < keybindings;i++) {
            window.draw(keybindingsarray[i].menusprite);
            window.draw(keybindingsarray[i].text);

        }

    }
    if (pagenumber == 2)
    {
        window.draw(draft);
    }
    window.display();



}

void game::startstructfunction(RenderWindow& window) {



    draft.setPosition(200, 200);
    settingstexture.loadFromFile("../assests/main menu/menu.png");
    slidertexture.loadFromFile("../assests/main menu/slider.png");
    keybutton.loadFromFile("../assests/main menu/key button.png");
    knottexture.loadFromFile("../assests/main menu/knot.png");
    returnbuttontexture.loadFromFile("../assests/main menu/return button.png");
    cloud1tex.loadFromFile("../assests/main menu/cloud1.png");
    cloud2tex.loadFromFile("../assests/main menu/cloud2.png");
    signtex.loadFromFile("../assests/main menu/sign.png");
    word1tex.loadFromFile("../assests/main menu/name1.png");
    word2tex.loadFromFile("../assests/main menu/name2.png");
    star.loadFromFile("../assests/main menu/star1.png");
    groundtex.loadFromFile("../assests/main menu/ground.png");
    standtex.loadFromFile("../assests/main menu/stand.png");
    stonetex.loadFromFile("../assests/main menu/stone'.png");
    tree1tex.loadFromFile("../assests/main menu/tree right.png");
    tree2tex.loadFromFile("../assests/main menu/tree left.png");
    portaltex.loadFromFile("../assests/main menu/portal.png");
    walktex.loadFromFile("../assests/main menu/walk.png");
    backgroundtex.loadFromFile("../assests/main menu/background.png");
    menutexture.loadFromFile("../assests/main menu/new button.png");
    background.loadFromFile("../assests/background sound.ogg");
    assestssound.loadFromFile("../assests/button-pressed-38129.ogg");
    menufont.loadFromFile("../assests/fonts/font.ttf");
    button2.loadFromFile("../assests/main menu/new button.png");
    drafttex.loadFromFile("../assests/main menu/still.png");
    exitnotetex.loadFromFile("../assests/main menu/exit notification.png");
    exitnote.setTexture(exitnotetex);
    draft.setTexture(drafttex);
    backgroundsprite.setTexture(backgroundtex);
    backgroundsprite.setScale(window.getSize().y / backgroundtex.getSize().y, window.getSize().x / backgroundtex.getSize().x + 3);
    cloud1sprite.setTexture(cloud1tex);
    cloud2sprite.setTexture(cloud2tex);
    word1sprite.setTexture(word1tex);
    word2sprite.setTexture(word2tex);
    star1.setTexture(star);
    star2.setTexture(star);
    groundsprite1.setTexture(groundtex);
    groundsprite2.setTexture(groundtex);
    groundsprite3.setTexture(groundtex);
    standsprite.setTexture(standtex);
    stonesprite1.setTexture(stonetex);
    stonesprite2.setTexture(stonetex);
    portal.setTexture(portaltex);
    tree1.setTexture(tree2tex);
    tree2.setTexture(tree1tex);
    sign.setTexture(signtex);
    returnbutton.setTexture(returnbuttontexture);
    slidersprite.setTexture(slidertexture);
    knotsprite.setTexture(knottexture);
    slidersprite2.setTexture(slidertexture);
    knotsprite2.setTexture(knottexture);
    settingsstruct.menusprite.setTexture(settingstexture);
    keybindingsarray[15].menusprite.setTexture(button2);  //button for default
    textarray[7].setPosition(settingsstruct.menusprite.getPosition() + Vector2f(500, 300));
    soundassests.setBuffer(assestssound);
    soundbackground.setBuffer(background);
    soundbackground.setLoop(true);
    soundbackground.play();
    startbackgroundposition(500, 270, exitnote);
    textarray[12].setPosition(675, 530);
    textarray[13].setPosition(870, 530);
   startbackgroundposition(700, 1200, sign);
    startbackgroundposition(1230, 1200, tree1);
    startbackgroundposition(0, 1200, tree2);
    startbackgroundposition(780, -100, portal);
    startbackgroundposition(1120, 1200, stonesprite2);
    startbackgroundposition(780, 1300, stonesprite1);
    startbackgroundposition(820, 1100, standsprite);
    startbackgroundposition(0, 1050, groundsprite1);
    startbackgroundposition(500, 1070, groundsprite2);
    startbackgroundposition(1000, 1060, groundsprite3);
    startbackgroundposition(-100, 210, star1);
    startbackgroundposition(-200, 210, star2);
    startbackgroundposition(-200, 1100, word1sprite);
    startbackgroundposition(-200, -1050, word2sprite);
    startbackgroundposition(1260, -500, cloud1sprite);
    startbackgroundposition(30, -500, cloud2sprite);
    startbackgroundposition(-50, 400, menuarray[0].menusprite);
    startbackgroundposition(-50, 500, menuarray[1].menusprite);
    startbackgroundposition(-50, 600, menuarray[2].menusprite);
    startbackgroundposition(700, 640, menuarray[3].menusprite);
    startbackgroundposition(930, 640, menuarray[4].menusprite);
    startbackgroundposition(-100, 620, beginplayer);
    newvolume = sliderstart(knotsprite, slidersprite);
    volume = newvolume;
    newvolume2 = sliderstart(knotsprite2, slidersprite2);
    volume2 = newvolume2;
    soundassests.setVolume(volume2);
    soundbackground.setVolume(volume);
    textarray[1].setString(to_string(volume) + "%");
    textarray[3].setString(to_string(volume2) + "%");
    star1.setScale(0.5, 0.5);
    star2.setScale(0.5, 0.5);
    settingsstruct.menusprite.setScale(1.6, 1.6);
    slidersprite.setPosition(500, 280);
    knotsprite.setPosition(550, 280);
    slidersprite2.setPosition(500, 400);
    knotsprite2.setPosition(560, 400);
    returnbutton.setPosition(510, 190);
    returnbutton.setScale(0.5, 0.5);
    textarray[0].setPosition(540, 250);
    settingsstruct.menusprite.setPosition(430, 130);
    textarray[1].setPosition(1000, 300);
    textarray[2].setPosition(540, 350);
    textarray[3].setPosition(1000, 400);
    textarray[4].setPosition(540, 480);
    textarray[5].setPosition(settingsstruct.menusprite.getPosition() + Vector2f(200, 100));
    textarray[6].setPosition(settingsstruct.menusprite.getPosition() + Vector2f(500, 100));
    textarray[10].setPosition(textarray[9].getPosition() + Vector2f(0, 70));
    textarray[11].setPosition(textarray[10].getPosition() + Vector2f(0, 80));
    textarray[14].setPosition(textarray[11].getPosition() + Vector2f(556, 450));
    setposition2(590, 400, textarray[8], 2);
    setposition2(520, 420, textarray[9], 2);
    setposition2(520, 500, textarray[10], 2);
    setposition2(520, 580, textarray[11], 2);
    menuarray[0].text.setString("play");
    menuarray[1].text.setString("settings");
    menuarray[2].text.setString("exit");
    menuarray[3].text.setString("fullscreen");
    menuarray[4].text.setString("normal");
    textarray[0].setString("sound volume ");
    textarray[2].setString("game volume ");  //for second slider
    textarray[4].setString("choose your key bindings ");
    textarray[5].setString("primary keyboard");
    textarray[6].setString("secondry keyboard");
    textarray[7].setString("movment");
    textarray[8].setString("---------------------------------");
    textarray[9].setString("pause");
    textarray[10].setString("entering houses");
    textarray[11].setString("interact with NPCs");
    textarray[12].setString("YES");
    textarray[13].setString("NO");
    textarray[14].setString("choose your screen mode");

    for (int i = 0;i < 5;i++) {
        menuarray[i].text.setFont(menufont);
        menuarray[i].text.setCharacterSize(40);
        menuarray[i].text.setFillColor(Color(210, 210, 210));
        menuarray[i].menusprite.setTexture(menutexture);
        menuarray[i].menusprite.setScale(0.5, 0.5);
    }
    for (int i = 0;i < textnumber;i++) {
        textarray[i].setFont(menufont);
        textarray[i].setFillColor(Color(50, 0, 50));
        textarray[i].setCharacterSize(40);
    }
   textarray[12].setFillColor(Color(210, 210, 210));
    textarray[13].setFillColor(Color(210, 210, 210));


}


void game::sliderhandel(Sprite& knot, Sprite& slider, Sound& sound, int n, int& volumee, float& newvolume,bool ismouseevent)

{
    float minposition = slider.getPosition().x;
    float maxposition = minposition + slider.getGlobalBounds().width - knot.getGlobalBounds().width;
    float newposition = mousepos.x;  // new position for the knot
    if (ismouseevent) {
        if (newposition < minposition) {
            newposition = minposition;
        }
        else   if (newposition > maxposition) {
            newposition = maxposition;
        }
    }
    else
        newposition = minposition + ((volumee / 100) * (maxposition - minposition));
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
    keybindingsarray[0].menusprite.setPosition(settingsstruct.menusprite.getPosition() + Vector2f(100, 400));
    keybindingsarray[0].text.setPosition(keybindingsarray[0].menusprite.getPosition() + Vector2f(60, 25));
    setposition(265, 150, keybindingsarray[1].menusprite);
    setposition(265, 220, keybindingsarray[2].menusprite);
    setposition(320, 190, keybindingsarray[3].menusprite);  //right
    setposition(210, 190, keybindingsarray[4].menusprite);
    setposition(520, 150, keybindingsarray[5].menusprite);
    setposition(520, 220, keybindingsarray[6].menusprite);
    setposition(580, 190, keybindingsarray[7].menusprite);  //right
    setposition(460, 190, keybindingsarray[8].menusprite);
    setposition(400, 300, keybindingsarray[9].menusprite);
    setposition(570, 300, keybindingsarray[10].menusprite);
    setposition(400, 370, keybindingsarray[11].menusprite);
    setposition(570, 370, keybindingsarray[12].menusprite);
    setposition(410, 450, keybindingsarray[13].menusprite);
    setposition(570, 450, keybindingsarray[14].menusprite);
    setposition(540, 510, keybindingsarray[15].menusprite);
    setposition2(38, 14, keybindingsarray[1].text, 1);
    setposition2(30, 15, keybindingsarray[2].text, 2);
    setposition2(30, 15, keybindingsarray[3].text, 3);
    setposition2(30, 18, keybindingsarray[4].text, 4);
    setposition2(43, 18, keybindingsarray[5].text, 5);
    setposition2(43, 18, keybindingsarray[6].text, 6);
    setposition2(43, 18, keybindingsarray[7].text, 7);
    setposition2(43, 18, keybindingsarray[8].text, 8);
    setposition2(37, 15, keybindingsarray[9].text, 9);
    setposition2(45, 18, keybindingsarray[10].text, 10);
    setposition2(35, 15, keybindingsarray[11].text, 11);
    setposition2(45, 18, keybindingsarray[12].text, 12);
    setposition2(37, 15, keybindingsarray[13].text, 13);
    setposition2(45, 18, keybindingsarray[14].text, 14);
    setposition2(32, 15, keybindingsarray[15].text, 15);
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
void game::setposition(float x, float y, Sprite& sprite) {

    sprite.setPosition(settingsstruct.menusprite.getPosition() + Vector2f(x, y));
}
void game::setposition2(float x, float y, Text& z, int i) {

    z.setPosition(keybindingsarray[i].menusprite.getPosition() + Vector2f(x, y));
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
void game::checkpause() {


    if (Keyboard::isKeyPressed(keybinds[keybinding5]))
    {
        soundassests.play();

        ispause = !ispause;
        cout << "play";
        sleep(milliseconds(200));
    }
}
void  game::startbackgroundposition(int x1, int y1, Sprite& sprite) {

    sprite.setPosition(x1, y1);
}
void game::backgroundmovment(int x2, int y2, Sprite& sprite) {
    float velocityposition = 500;
    Vector2f aimdirection(x2, y2);
    Vector2f direction = aimdirection - (sprite.getPosition());
    float length = sqrt(pow(direction.x, 2) + pow(direction.y, 2));
    if (length > 1.0f) {
        direction = Vector2f(direction.x / length, direction.y / length);
        sprite.move(direction * velocityposition * deltaTime);
    }
    else
        sprite.setPosition(aimdirection);
    if (word2sprite.getPosition().x == aimdirection.x && word2sprite.getPosition().y == aimdirection.y) {
        allfinish = true;
    }

}
void game::startplayer() {
    beginplayer.setScale(3, 3);
    float velocity = 103;
    Vector2f aimdirection(600, 620);
    Vector2f direction = (aimdirection - beginplayer.getPosition());
    beginplayer.setTexture(walktex);
    float length = sqrt(pow(direction.x, 2) + pow(direction.y, 2));
    if (length > 1.0f) {
        direction = Vector2f(direction.x / length, direction.y / length);

        beginplayer.setTextureRect(IntRect(index * 64, 0, 64, 64));
        index = (index + 1) % 9;
        beginplayer.move(direction * velocity * deltaTime);
    }
    else
    {

        beginplayer.setTextureRect(IntRect(0, 0, 64, 64));
        beginplayer.setPosition(aimdirection);
    }

}
void  game::handelupdate(RenderWindow& window,View&view) {

    for (int i = 12;i < 14;i++) {
        if (textarray[i].getGlobalBounds().contains(mousepos)) {
            textarray[i].setFillColor(Color(50, 0, 50));
            if (Mouse::isButtonPressed(Mouse::Left)) {
                if (textarray[12].getGlobalBounds().contains(mousepos))
                
                    savedata();
                    window.close();
                
            }
        }
        else

            textarray[i].setFillColor(Color(210,210,210));
    }
    for (int i = 0;i < 5;i++) {

        if (menuarray[i].menusprite.getGlobalBounds().contains(mousepos))
            menuarray[i].text.setFillColor(Color(50, 0, 50));
        else

            menuarray[i].text.setFillColor(Color(210, 210, 210));
    }

    if (menuarray[2].menusprite.getGlobalBounds().contains(mousepos) && buttonexitexist && subpage1exist == false) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
            savedata();
            soundassests.play();
            notificatio = true;  //for saving progress
         

        }
    } if (menuarray[3].menusprite.getGlobalBounds().contains(mousepos) && buttonexitexist==false && subpage1exist ) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
            windowresize(window, view, false);
            soundassests.play();
          


        }
    }

    if (menuarray[4].menusprite.getGlobalBounds().contains(mousepos) && buttonexitexist == false && subpage1exist) {
        if (Mouse::isButtonPressed(Mouse::Left)) {
            windowresize(window, view, true);
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
        sliderhandel(knotsprite, slidersprite, soundbackground, 1, volume, newvolume,true);
    }
    if (dragging2) {

        sliderhandel(knotsprite2, slidersprite2, soundassests, 3, volume2, newvolume2,true);

        soundassests.setVolume(volume2);
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
    if (Keyboard::isKeyPressed(keybinds["move up"])) {
        draft.move(0, -10);

    }
    else    if (Keyboard::isKeyPressed(keybinds["move down"])) {
        draft.move(0, 10);

    }
    else  if (Keyboard::isKeyPressed(keybinds["move right"])) {
        draft.move(10, 0);

    }
    else  if (Keyboard::isKeyPressed(keybinds["move left"])) {
        draft.move(-10, 0);

    }





}
void game::handelbackground() {



    backgroundmovment(700, 607, sign);
    backgroundmovment(1230, 560, tree1);
    backgroundmovment(0, 600, tree2);
    backgroundmovment(780, 480, portal);
    backgroundmovment(780, 695, stonesprite1);
    backgroundmovment(1120, 695, stonesprite2);
    backgroundmovment(820, 655, standsprite);
    backgroundmovment(0, 740, groundsprite1);
    backgroundmovment(500, 740, groundsprite2);
    backgroundmovment(1000, 740, groundsprite3);
    backgroundmovment(270, 210, star1);
    backgroundmovment(500, 210, star2);
    backgroundmovment(80, 290, word1sprite);
    backgroundmovment(380, 270, word2sprite);
    backgroundmovment(1260, 100, cloud1sprite);
    backgroundmovment(30, 75, cloud2sprite);
    backgroundmovment(300, 400, menuarray[0].menusprite);
    backgroundmovment(300, 500, menuarray[1].menusprite);
    backgroundmovment(300, 600, menuarray[2].menusprite);
    menuarray[0].text.setPosition(menuarray[0].menusprite.getPosition() + Vector2f(90, 5));
    menuarray[1].text.setPosition(menuarray[1].menusprite.getPosition() + Vector2f(60, 5));
    menuarray[2].text.setPosition(menuarray[2].menusprite.getPosition() + Vector2f(90, 5));
    menuarray[3].text.setPosition(menuarray[3].menusprite.getPosition() + Vector2f(55, 7));
    menuarray[4].text.setPosition(menuarray[4].menusprite.getPosition() + Vector2f(65, 7));
    if (allfinish) {
        startplayer();

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
    gamesave.newvolume = newvolume;
    gamesave.newvolume2 = newvolume2;   //save volumes value 
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
        newvolume = gamesave.newvolume;
        newvolume2 = gamesave.newvolume2;
        int i = 0;
        for (auto& pair : keybinds) {  //canot put const because here we change in them 
            pair.second  = static_cast<Keyboard::Key> (gamesave.keybinds[i++]);
        }
        inputfile.close();
    }
    sliderhandel(knotsprite2, slidersprite2, soundassests, 3, volume2, newvolume2,false);
    sliderhandel(knotsprite, slidersprite, soundbackground, 3, volume, newvolume, false);
    cout << "the volume" << volume << endl;



}