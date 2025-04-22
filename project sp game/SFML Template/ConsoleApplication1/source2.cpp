#include"newheader.h"

void game::startstructfunction(RenderWindow& window) {

    window.setMouseCursorVisible(false);
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
    exitnotetex.loadFromFile("../assests/main menu/exit notification.png");
    cursor.loadFromFile("../assests/main menu/cursor.png");
    exiticont.loadFromFile("../assests/main menu/exit.png");
    settingsicont.loadFromFile("../assests/main menu/settingsicon.png");
    groundsprite4.setTexture(groundtex);
    groundsprite5.setTexture(groundtex);
    exiticon.setTexture(exiticont);
    buttonreturn.setTexture(returnbuttontexture);
    settingsicon.setTexture(settingsicont);
    settingsicon.setScale(0.42, 0.42);
    exiticon.setScale(0.7, 0.7);
    cursorsprite.setTexture(cursor);
    cursorsprite.setScale(0.1, 0.1);
    exitnote.setTexture(exitnotetex);
    backgroundsprite.setTexture(backgroundtex);
    backgroundsprite.setScale(resolution.y / backgroundtex.getSize().y, resolution.x / backgroundtex.getSize().x + 3);
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
    startbackgroundposition(1500, 1080, groundsprite4);
    startbackgroundposition(-500, 1070, groundsprite5);
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
    startbackgroundposition(1400, 125, exiticon);
    startbackgroundposition(1340, 123, settingsicon);
    arraystart[0].setPosition(650, 300);
    arraystart[1].setPosition(600, 400);
    arraystart[2].setPosition(570, 500);
    buttonreturn.setPosition(1300, 120);             //
    buttonreturn.setScale(0.5, 0.5);
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
    keybindingsarray[0].menusprite.setPosition(settingsstruct.menusprite.getPosition() + Vector2f(100, 400));
    keybindingsarray[0].text.setPosition(keybindingsarray[0].menusprite.getPosition() + Vector2f(60, 25));
    setposition(265, 150, keybindingsarray[1].menusprite);
    setposition(265, 220, keybindingsarray[2].menusprite);
    setposition(320, 190, keybindingsarray[3].menusprite);
    setposition(210, 190, keybindingsarray[4].menusprite);
    setposition(520, 150, keybindingsarray[5].menusprite);
    setposition(520, 220, keybindingsarray[6].menusprite);
    setposition(580, 190, keybindingsarray[7].menusprite);
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
    for (int i = 0;i < 3;i++) {
        arraystart[i].setFont(menufont);
        arraystart[i].setCharacterSize(70);
        arraystart[i].setFillColor(Color(160, 160, 160));
    }
    arraystart[0].setString("start new game");
    arraystart[1].setString("choose your player");
    arraystart[2].setString("continue the last game");

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
    if (notificatio && pagenumber == 1 && subpage == 0
        ) {
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
        window.draw(backgroundsprite);
        window.draw(cloud1sprite);
        window.draw(cloud2sprite);
        window.draw(groundsprite1);
        window.draw(groundsprite2);
        window.draw(groundsprite3);
        window.draw(tree1);
        window.draw(tree2);
        window.draw(arraystart[0]);   //
    }
    if (readsaved() && pagenumber == 2)
    {
        window.draw(arraystart[1]);
        window.draw(arraystart[2]);

    }
    if (pagenumber != 1)
    {
        window.draw(settingsicon);

    }
    if (pagenumber == 3)
        window.draw(exiticon);
    if (pagenumber != 1 && notificatio) {
        window.draw(exitnote);
        for (int i = 12;i < 14;i++)
        {
            window.draw(textarray[i]);
        }
    }
    if ((pagenumber != 1 && subpage == 1)) {
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
    if (pagenumber != 0 && subpage == 2) {
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
    if (pagenumber != 1 && subpage == 0)
        window.draw(buttonreturn);
    window.draw(cursorsprite);
    window.display();




}void game::setposition(float x, float y, Sprite& sprite) {

    sprite.setPosition(settingsstruct.menusprite.getPosition() + Vector2f(x, y));
}
void game::setposition2(float x, float y, Text& z, int i) {

    z.setPosition(keybindingsarray[i].menusprite.getPosition() + Vector2f(x, y));
}

void game::checkpause() {


    if (Keyboard::isKeyPressed(keybinds[keybinding5]))
    {
        soundassests.play();

        ispause = !ispause;
        cout << "play";
        sleep(milliseconds(200));
    }
}void  game::startbackgroundposition(int x1, int y1, Sprite& sprite) {

    sprite.setPosition(x1, y1);
}void game::backgroundmovment(int x2, int y2, Sprite& sprite) {
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

}void game::handelbackground() {



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
    backgroundmovment(1500, 735, groundsprite4);
    backgroundmovment(-500, 735, groundsprite5);
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
