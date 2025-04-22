#pragma once


#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <SFML/Audio.hpp>
#include <sstream>
#include <iomanip>

using namespace std;
using namespace sf;

struct selectPlayer {

    struct player  // one name onlyyyyy edit  on its ppos
    {
        Sprite process[3];
        Texture playertex[2];  //2 Choices  for player textuer 
        Text playername;   // player name  of namedone
        string username = "";
        string namedone = "";
        Text name;   //of username
        RectangleShape namebox;
        RectangleShape playerbox;

    };// myplayer[2];

    void Updateselectplayer(RenderWindow& window);
    void Startselectplayer();
    void Draw(RenderWindow& window);
    void updateselectplayer2(Vector2f& mouse);
    float deltaTime;
    float maxwidth;
    float textwidth;

    Font font;
    Event event;
    Sprite  bigbox, close, smallbox, arrowleft, arrowright, button, textbox, truebut, playersscreen, close2, add, finalplayer;//use one from each tex and edit position 
    Texture texclose, texbigbox, player1, player2, texsmallbox, arrowr, arrowl, texbutton, TexTextbox, textrue, texplayerscreen, texadd;
    Text buttonsel;


    string select = "Select";
    bool firstone = false;
    bool sselectingisdone = false;
    bool isplayersel = false;
    bool deletname = false;
    bool isentered = false;
    bool istextboxsel = false;
    bool keyisdown = false;
    bool truebutton = false;
    bool addplayer = false;
    bool menubutton = true;

    bool firstex;
    int playerindex = 0;
    int addcounter = 0;


    void playercut(int playertexnum);
    void selplayerUI(Texture& texname, Sprite& sprite, int xpos, int ypos, int xscal, int yscal);
    void selplayerUI(Texture& texname, Sprite& sprite, Sprite& linkedsprite, int xpos, int ypos, int xscal, int yscal);
    void setupfonts(Font gamefont, Text text, string str, int fontsize, int xpos, int ypos);
    void setupfonts(Font gamefont, Text text, string str, Sprite linkedpos, int fontsize, int xpos, int ypos);

    void chooseplayer(Vector2f mouse);

    void cinname(Vector2f mouse);


    void closebut(Vector2f mouse);

    void seltextbox(Vector2f mouse);

    void doneselect(Vector2f mouse);


    void closebut2(Vector2f mouse);


    void startadd(Vector2f mouse);

    void finalchoose(Vector2f mouse);
    void savedata(std::string& filename);
    void loadfromfile(std::string& filename);
};
