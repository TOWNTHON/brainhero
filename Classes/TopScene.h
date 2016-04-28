#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

USING_NS_CC;

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
    void gotoGameScene(Ref* pSender);
    
private:
    void transitionScene(CCScene *nextScene){
        float duration = .3f;
        CCScene* pScene = CCTransitionCrossFade::create(duration, nextScene);
        if(pScene){
            CCDirector::sharedDirector()->pushScene(pScene);
        }
    }
};

#endif // __HELLOWORLD_SCENE_H__

