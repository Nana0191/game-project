
#ifndef newheader
#define newheader
#include <SFML/Graphics.hpp>
#include<SFML//System.hpp>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <SFML/Audio.hpp>
#include <sstream>
#include <iomanip>
#include<map>
using namespace std;
using namespace sf;
const int  keybindsnumbers = 7;
const int keybindings = 16;
const int textnumber = 15;

const string keybinding1 = "move up";
const string keybinding2 = "move down";
const string keybinding3 = "move left";
const string keybinding4 = "move right";
const string keybinding5 = "pause";
const string keybinding6 = "entering houses";
const string keybinding7 = "interacting with npcs";




struct game {
   
    Font menufont;
    Texture menutexture;  //for the button
    Texture settingstexture;
    Texture slidertexture;
    Texture knottexture;
    Sprite slidersprite;
    Sprite knotsprite;
    Sprite slidersprite2;
    Sprite knotsprite2;
    Texture returnbuttontexture;
    Sprite returnbutton;
    Texture button2;
    Texture keybutton;
    Texture backgroundtex;
    Sprite backgroundsprite;
    SoundBuffer assestssound;
    Sound soundassests;
    SoundBuffer background;
    Sound soundbackground;
    Texture cloud1tex;
    Sprite cloud1sprite;
    Texture cloud2tex;
    Sprite cloud2sprite;
    Texture word1tex;
    Texture word2tex;
    Sprite word1sprite;
    Sprite word2sprite;
    Texture star;
    Sprite star1;
    Sprite star2;
    Texture groundtex;
    Sprite groundsprite1;
    Sprite groundsprite2;
    Sprite groundsprite3;
    Texture standtex;
    Texture stonetex;
    Sprite standsprite;
    Sprite stonesprite1;
    Sprite stonesprite2;
    Texture portaltex;
    Sprite portal;
    Texture tree1tex;
    Texture tree2tex;
    Sprite tree1;
    Sprite tree2;
    Texture signtex;
    Sprite sign;
    Texture walktex;
   Texture exitnotetex;
    Sprite exitnote;
    Text arraystart[4];
    Sprite beginplayer;
    Texture cursor;
    Sprite cursorsprite;
    Texture exiticont;
    Texture settingsicont;
    Sprite exiticon;
    Sprite settingsicon;
    Sprite groundsprite4;
    Sprite groundsprite5;
    Sprite buttonreturn;
    int pagenumber = 1;  //current window as the menu
    int subpage = 0;  //current window for settings 
    bool dragging2 = false;
    bool notificatio=false;
    float maxposition;
    float minposition;
    float newposition;
    bool ifsaved;
    struct text { //for the three buttons of main menu


        Text text;
        Sprite menusprite;



    };

    text menuarray[5];
    text settingsstruct;
    Text textarray[textnumber];
    text keybindingsarray[keybindings];
    bool ispause = false;
    bool buttonexitexist = true;
    bool subpage1exist = true;
    bool dragging = false;  //for the slider

    float deltaTime;
    int volume ;
    float newvolume;
    float newvolume2;
    int volume2 ;
    bool allfinish = false;
    int index = 0;
    bool exitclick=false;
    void startstructfunction(RenderWindow& window);
    void startfunctionforkeybindings();
    void Update(RenderWindow& window, View& view);
    void Start(RenderWindow& window);
    void Draw(RenderWindow& window);
    void setposition(float, float, Sprite&);
    void sliderhandel(Sprite&, Sprite&, Sound&, int, int&, float&);
    void setposition2(float, float, Text&, int);
    void backgroundmovment(int x2, int y2, Sprite& sprite);
    void startbackgroundposition(int x1, int y1, Sprite& sprite);
    void handelkeybindings();
    void checkpause();
    void startplayer();
    void handelupdate(RenderWindow& window, View& view);
    void handelbackground();
    void savedata();
    void loadfile();
    void windowresize(RenderWindow& window, View& view, bool isfullscreen);
    bool readsaved();
    void writesaved();
const sf:: Vector2u resolution=sf::Vector2u(1680, 1050);  //design the default size of window  //1680
    int sliderstart(Sprite&, Sprite&);
    Vector2f mousepos;
    map<std::string, Keyboard::Key>keybinds;
    struct gamesave{
        int volume;
        int volume2;
        float positionknotX;
       float positionknoty;
       float positionknotX2;
       float positionknoty2;
       int keybinds[keybindsnumbers];
    
    
    };
   
    Event event;

    struct  monster {
        Sprite monstersprite;
        Texture monsterwalk;
        Texture monsteridle;
        Texture monsterrun;
        Texture monsterattack;
        int health=600;
        float timer=0;
        float timetowait = 2;
        float timepassed =0;
        float monstervelocity=100;
        int indexrow = 0;
        int indexrun = 0;
        int indexattack = 0;
        bool iswaiting=false;
        Vector2f monsterposition;
        Vector2f pointA;
        Vector2f pointB;
        Vector2f target;
       
        void start(Vector2f position, Vector2f point1, Vector2f point2);
        void update(Sprite&player, Clock& clock);
        void idle();
        void run(Vector2f& distancebetweenthem, float& length, Sprite& player);
        void attack(Sprite&player);
        bool makedamage(Sprite&player, float& length);
        void dead();
        void takedamage(Sprite&spritetool);
  

    };
    monster monster1;








};

#endif