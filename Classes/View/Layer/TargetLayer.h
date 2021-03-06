#ifndef __VIEW_LAYER_TARGET_LAYER_H__
#define __VIEW_LAYER_TARGET_LAYER_H__

#include "cocos2d.h"

USING_NS_CC;

class TargetLayer : public Layer
{
public:
	TargetLayer();
	~TargetLayer();
	CREATE_FUNC(TargetLayer);

	virtual bool init() override;

private:
	void roundChanged(Ref* obj);

};

#endif // __VIEW_LAYER_TARGET_LAYER_H__
