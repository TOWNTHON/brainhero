//
//  GameScene.h
//  bthero
//
//  Created by 渡邊亮輔 on 2016/04/28.
//
//

#ifndef GameScene_h
#define GameScene_h

class GameScene : public cocos2d::CCLayer
{
public:
    virtual bool init();
    
    static cocos2d::CCScene* createScene();
    
    CREATE_FUNC(GameScene);
    
private:
    
};
#endif /* GameScene_h */
