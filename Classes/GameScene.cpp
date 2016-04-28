//
//  GameScene.cpp
//  bthero
//
//  Created by 渡邊亮輔 on 2016/04/28.
//
//

#include "GameScene.h"
#include <stdio.h>

USING_NS_CC;

Scene* GameScene::createScene()
{
    auto scene = Scene::create();
    auto layer = GameScene::create();
    scene->addChild(layer);
    return scene;
}

bool GameScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    auto bgSprite = Sprite::create("background.png");
    bgSprite->setPosition(ccp(visibleSize.width*.5 + origin.x, visibleSize.height*.5 + origin.y));
    addChild(bgSprite);

    return true;
}