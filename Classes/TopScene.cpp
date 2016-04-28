#include "TopScene.h"
#include "GameScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    auto bgSprite = Sprite::create("topSceneBgImg.png");
    bgSprite->setPosition(ccp(visibleSize.width*.5 + origin.x, visibleSize.height*.5 + origin.y));
    addChild(bgSprite);
    
    auto pNormalStartBtnSprite = Sprite::create("startBtn.png");
    auto pSelectedStartBtnSprite = Sprite::create("startBtn_tapped.png");
    auto pBtnItem = MenuItemSprite::create(pNormalStartBtnSprite, pSelectedStartBtnSprite, CC_CALLBACK_1(HelloWorld::gotoGameScene, this));
    
    auto pMenu = Menu::create(pBtnItem, NULL);
    pMenu->setPosition(ccp(visibleSize.width*.5 + origin.x, visibleSize.height*.5 + origin.y));
    addChild(pMenu);
    
    return true;
}

void HelloWorld::gotoGameScene(Ref *pSender)
{
    CCScene *scene = GameScene::createScene();
    transitionScene(scene);
}