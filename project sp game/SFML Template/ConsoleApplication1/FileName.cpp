
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <SFML/Audio.hpp>
#include <sstream>
#include <iomanip>
#include"FileName.h"
using namespace std;
using namespace sf;

selectPlayer::player myplayer[2];

void selectPlayer::Startselectplayer()
{

    menubutton = true;
    texadd.loadFromFile("../main/add.png"); // 
    texplayerscreen.loadFromFile("../main/big.png"); //one
    textrue.loadFromFile("../main/true.png");
    texclose.loadFromFile("../main/close.png");          //
    font.loadFromFile("../assests/fonts/font.ttf");
    texbigbox.loadFromFile("../main/big.png");
    texbutton.loadFromFile("../main/b3.png");
    arrowr.loadFromFile("../main/right.png");
    arrowl.loadFromFile("../main/left.png");
    texsmallbox.loadFromFile("../main/small.png");
    TexTextbox.loadFromFile("../main/b1.png");


    //selplayerUI(texbigbox, bigbox, 90, 230, 1, 1);


    bigbox.setTexture(texbigbox);
    bigbox.setPosition(90, 230);

    arrowright.setTexture(arrowr);
    arrowright.setPosition(356, 430);
    arrowright.setScale(0.13, 0.13);

    /*  selplayerUI(arrowr, arrowright, 356, 430, 0.13, 0.13);*/


    arrowleft.setTexture(arrowl);
    arrowleft.setPosition(160, 440);
    arrowleft.setScale(0.097, 0.097);
    /* selplayerUI(arrowl, arrowleft, 90, 230,0.97, 0.97);*/


    button.setTexture(texbutton);
    button.setPosition(235, 510);
    button.setScale(0.65, 0.65);
    /*   selplayerUI(texbutton, button, 235, 510, 0.65, 0.65);**/

    select = "Select";
    buttonsel.setString(select);
    buttonsel.setFont(font);
    buttonsel.setCharacterSize(24);
    buttonsel.setFillColor(Color::Black);
    buttonsel.setPosition(button.getPosition().x + 29, button.getPosition().y + 28);
    /*setupfonts(font, buttonsel,select, button,24, 29, 28);*/
    buttonsel.setFillColor(Color::Black);


    smallbox.setTexture(texsmallbox);
    smallbox.setPosition(150, 300);
    /*selplayerUI(texsmallbox, smallbox, 150, 300, 1, 1);*/


    textbox.setTexture(TexTextbox);
    textbox.setPosition(bigbox.getPosition().x + 125, bigbox.getPosition().y + 240);
    textbox.setScale(2.5, 1);

    maxwidth = 3.3 * (TexTextbox.getSize().x - 60);

    close.setPosition(bigbox.getPosition().x + 400, bigbox.getPosition().y + 44);
    close.setTexture(texclose);
    close.setScale(0.5, 0.5);

    close2.setTexture(texclose);
    close2.setScale(0.5, 0.5);
    close2.setPosition(playersscreen.getPosition().x + 650, playersscreen.getPosition().y + 270);


    truebut.setPosition(bigbox.getPosition().x + 380, bigbox.getPosition().y + 260);
    truebut.setTexture(textrue);
    truebut.setScale(0.5, 0.5);

    playersscreen.setPosition(200, 200);
    playersscreen.setTexture(texplayerscreen);
    playersscreen.setScale(1.4, 1.3);

    /* selplayerUI(texplayerscreen, playersscreen, 50, 200, 1.4, 1.3);*/

    add.setPosition(playersscreen.getPosition().x + 190, playersscreen.getPosition().y + 220);
    add.setTexture(texadd);
    add.setScale(0.14, 0.14);
    /*selplayerUI(texadd, add,playersscreen, 190, 220, 0.14, 0.14);*/

    myplayer[0].process[0].setPosition((smallbox.getGlobalBounds().height) / 2 + 50, (smallbox.getGlobalBounds().width / 2) + 180);
    myplayer[1].process[0].setPosition((smallbox.getGlobalBounds().height) / 2 + 50, (smallbox.getGlobalBounds().width / 2) + 180);

    playercut(0);

}


void selectPlayer::Updateselectplayer(RenderWindow& window)
{
    myplayer[playerindex].name.setPosition(textbox.getPosition().x + 45, textbox.getPosition().y + 25);
    myplayer[playerindex].name.setFont(font);
    myplayer[playerindex].name.setCharacterSize(34);
    myplayer[playerindex].name.setFillColor(Color::Black);

    myplayer[playerindex].playertex[1].loadFromFile("../main/spellcast1.png");
    myplayer[playerindex].playertex[0].loadFromFile("../main/spellcast.png");
    myplayer[playerindex].playername.setFont(font);
    myplayer[playerindex].playername.setCharacterSize(28);
    myplayer[playerindex].playername.setFillColor(Color::White);


    myplayer[playerindex].playerbox.setFillColor(sf::Color(255, 255, 255, 150));
    myplayer[playerindex].playerbox.setOutlineColor(sf::Color(139, 69, 19));
    myplayer[playerindex].playerbox.setOrigin(myplayer[playerindex].namebox.getGlobalBounds().width / 2, myplayer[playerindex].namebox.getGlobalBounds().height / 2);
    myplayer[playerindex].playerbox.setOutlineThickness(3);


    myplayer[playerindex].namebox.setFillColor(sf::Color(255, 255, 255, 150));
    myplayer[playerindex].namebox.setOutlineColor(sf::Color(139, 69, 19));
    myplayer[playerindex].namebox.setOutlineThickness(3);
    myplayer[playerindex].namebox.setOrigin(myplayer[playerindex].namebox.getGlobalBounds().width / 2, myplayer[playerindex].namebox.getGlobalBounds().height / 2);
 

}

   

void selectPlayer::updateselectplayer2(Vector2f& mouse){


        if (event.type == sf::Event::MouseButtonPressed) {

            chooseplayer(mouse);

            finalchoose(mouse);

            seltextbox(mouse);


            closebut(mouse);

            doneselect(mouse);

            closebut2(mouse);
            //if(addcounter<=2)
            startadd(mouse);
        }


        if (istextboxsel)
            cinname(mouse);



    }


void selectPlayer::playercut(int x) {


    IntRect rectplayer1(70, 128, 70, 64);
    myplayer[playerindex].process[0].setTexture(myplayer[playerindex].playertex[x]);
    myplayer[playerindex].process[0].setTextureRect(rectplayer1);
    myplayer[playerindex].process[0].setScale(3.2, 3.2);



}

void selectPlayer::selplayerUI(Texture& texname, Sprite& sprite, int xpos, int ypos, int xscal, int yscal) {

    sprite.setTexture(texname);
    sprite.setPosition(xpos, ypos);
    sprite.setScale(xscal, yscal);

}
void selectPlayer::selplayerUI(Texture& texname, Sprite& sprite, Sprite& linkedsprite, int xpos, int ypos, int xscal, int yscal) {

    sprite.setTexture(texname);

    sprite.setScale(xscal, yscal);
    sprite.setPosition(linkedsprite.getPosition().x + xpos, linkedsprite.getPosition().y + ypos);

}
void selectPlayer::setupfonts(Font gamefont, Text text, string str, Sprite linkedpos, int fontsize, int xpos, int ypos) {
    text.setString(str);
    text.setFont(gamefont);
    text.setCharacterSize(fontsize);
    text.setPosition(linkedpos.getPosition().x + xpos, linkedpos.getPosition().y + ypos);
}
void selectPlayer::setupfonts(Font gamefont, Text text, string str, int fontsize, int xpos, int ypos) {
    text.setString(str);
    text.setFont(gamefont);
    text.setCharacterSize(fontsize);
    text.setPosition(xpos, ypos);
}

void selectPlayer::chooseplayer(Vector2f mouse) {

    if (!isplayersel) {




        if (arrowright.getGlobalBounds().contains(Vector2f(mouse)) && firstex)


        {
            firstex = false;
            playercut(1);
        }



        else if (arrowright.getGlobalBounds().contains(Vector2f(mouse)) && !firstex)
        {
            firstex = true;
            playercut(0);
        }

        else if (arrowleft.getGlobalBounds().contains(Vector2f(mouse)) && firstex)
        {
            firstex = false;
            playercut(1);
        }


        else if (arrowleft.getGlobalBounds().contains(Vector2f(mouse)) && !firstex)
        {

            firstex = true;
            playercut(0);
        }


        if (button.getGlobalBounds().contains(Vector2f(mouse)) && !isplayersel)
        {

            isplayersel = true;
            myplayer[playerindex].process[1] = myplayer[playerindex].process[0];
            myplayer[playerindex].process[1].setPosition((bigbox.getGlobalBounds().height / 2) - 80, (bigbox.getGlobalBounds().width / 2) + 20);
        }



    }
}

void selectPlayer::cinname(Vector2f mouse) {




    if (istextboxsel && !isentered && event.type == Event::TextEntered) {
        textwidth = myplayer[playerindex].name.getLocalBounds().width;




        cout << "Key Pressed: " << event.text.unicode << endl;
        if (!keyisdown)
        {

            if (event.text.unicode == 8) {
                if (!myplayer[playerindex].username.empty()) {
                    myplayer[playerindex].username.pop_back();
                }
            }
            else if (event.text.unicode >= 32 && event.text.unicode < 127)
            {
                cout << textwidth << "  " << maxwidth << endl;
                if (textwidth < maxwidth)
                    myplayer[playerindex].username += static_cast<char>(event.text.unicode);

            }
            keyisdown = true;
        }
    }

    if (event.type == Event::KeyReleased)
    {
        keyisdown = false;
    }


    if (event.type == Event::KeyPressed && event.key.code == Keyboard::Enter)
    {
        isentered = true;
        myplayer[playerindex].name.setString(myplayer[playerindex].username);
    }

    if (!isentered)
        myplayer[playerindex].name.setString(myplayer[playerindex].username + "_");
    else
        myplayer[playerindex].name.setString(myplayer[playerindex].username);


}

void selectPlayer::closebut(Vector2f mouse) {

    if (close.getGlobalBounds().contains(Vector2f(mouse))) {

        isplayersel = false;
        istextboxsel = false;
        isentered = false;
        myplayer[playerindex].username = "";
        myplayer[playerindex].name.setString(myplayer[playerindex].username);
    }


}

void selectPlayer::seltextbox(Vector2f mouse) {

    if (textbox.getGlobalBounds().contains(Vector2f(mouse)))
    {
        istextboxsel = true;


    }
    else
        istextboxsel = false;


}

void selectPlayer::doneselect(Vector2f mouse) {
    int  x;
    int x2;
    if (truebut.getGlobalBounds().contains(Vector2f(mouse)))
    {
        if (playerindex == 1) {
            x = 290;
            x2 = 30;
            add.setScale(0, 0);
        }
        else
            x = 0;
        x2 = 0;
        menubutton = true;
        truebutton = true;
        istextboxsel = false;
        isentered = false;
        add.setPosition((myplayer[playerindex].process[2].getGlobalBounds().width) + 535, myplayer[playerindex].process[2].getPosition().y + 410);
        textwidth = myplayer[playerindex].name.getLocalBounds().width + 20;
        myplayer[playerindex].namebox.setSize(sf::Vector2f(textwidth, 30));
        myplayer[playerindex].playerbox.setSize(sf::Vector2f(3 * 64, 3 * 72));

        myplayer[playerindex].namedone = myplayer[playerindex].username;
        myplayer[playerindex].playername.setString(myplayer[playerindex].namedone);

        myplayer[playerindex].process[2] = myplayer[playerindex].process[1];
        myplayer[playerindex].process[2].setScale(3.7, 3.7);

        myplayer[playerindex].process[2].setOrigin(64 / 2, 72 / 2);
        myplayer[playerindex].namebox.setOrigin(textwidth / 2, 30 / 2);
        myplayer[playerindex].playerbox.setOrigin((3 * 64) / 2, (3 * 72) / 2);
        myplayer[playerindex].process[2].setPosition((playersscreen.getGlobalBounds().height / 2) + 30 + x, (playersscreen.getGlobalBounds().width / 2) + 60);
        myplayer[playerindex].playerbox.setPosition(myplayer[playerindex].process[2].getPosition().x - 70 + x2, myplayer[playerindex].process[2].getPosition().y - 80);
        myplayer[playerindex].namebox.setPosition(myplayer[playerindex].process[2].getPosition().x - 20, myplayer[playerindex].process[2].getPosition().y + 170);
        myplayer[playerindex].playername.setPosition(myplayer[playerindex].namebox.getPosition().x - 25, myplayer[playerindex].namebox.getPosition().y - 20);
    }
}

void selectPlayer::closebut2(Vector2f mouse) {


    if (close2.getGlobalBounds().contains(Vector2f(mouse)))
    {
        truebutton = false;

        menubutton = false;
        addplayer = false;
    }



}

void selectPlayer::startadd(Vector2f mouse) {


    if (add.getGlobalBounds().contains(Vector2f(mouse)))
    {

        addcounter++;
        if (addcounter == 2) {

            playerindex++;
            isplayersel = false;
            playercut(0);
            addplayer = true;
            menubutton = false;
            truebutton = false;
        }

       
    }

}

void selectPlayer::finalchoose(Vector2f mouse) {
    if (addcounter <= 2 && truebutton) {

        if (myplayer[1].playerbox.getGlobalBounds().contains(Vector2f(mouse))) {

            finalplayer = myplayer[1].process[2];
            myplayer[1].playerbox.setFillColor(sf::Color(255, 255, 255, 150));
            finalplayer.setScale(6, 6);
            finalplayer.setPosition(400, 200);

            // playersscreen.setScale(0, 0);
            // close2.setScale(0, 0);
            truebutton = false;
            addplayer = false;
            sselectingisdone = true;


        }
        else   if (myplayer[0].playerbox.getGlobalBounds().contains(Vector2f(mouse))) {


            finalplayer = myplayer[0].process[2];
            myplayer[0].playerbox.setFillColor(sf::Color(255, 255, 255, 150));
            finalplayer.setScale(6, 6);
            finalplayer.setPosition(400, 200);

            truebutton = false;
            addplayer = false;
            sselectingisdone = true;


        }
    }
}

void selectPlayer::Draw(RenderWindow& window)
{



   
   /* if (!sselectingisdone && menubutton || truebutton) {
        window.draw(playersscreen);
        window.draw(add);
        window.draw(close2);
    }*/


    if ( !sselectingisdone) {

        window.draw(smallbox);
        window.draw(arrowright);
        window.draw(arrowleft);
        if (addcounter == 1)
            window.draw(myplayer[0].process[0]);
        if (addcounter == 2)
            window.draw(myplayer[1].process[0]);
        window.draw(button);
        window.draw(buttonsel);
    }
    if (!sselectingisdone && isplayersel && addplayer && !menubutton) {
        window.draw(bigbox);
        window.draw(textbox);
        if (addcounter == 1)
            window.draw(myplayer[0].name);
        if (addcounter == 2)
            window.draw(myplayer[1].name);

        window.draw(truebut);
        window.draw(close);

        if (addcounter == 1)
            window.draw(myplayer[0].process[1]);
        if (addcounter == 2)
            window.draw(myplayer[1].process[1]);
    }

    if (truebutton && !sselectingisdone) {


        window.draw(myplayer[0].playerbox);
        window.draw(myplayer[0].process[2]);
        window.draw(myplayer[0].namebox);
        window.draw(myplayer[0].playername);

        window.draw(myplayer[1].playerbox);
        window.draw(myplayer[1].process[2]);
        window.draw(myplayer[1].namebox);
        window.draw(myplayer[1].playername);

    }


    if (sselectingisdone)
        window.draw(finalplayer);






}
void  selectPlayer::savedata(std::string& filename) {




}
void  selectPlayer::loadfromfile(std::string& filename) {





}