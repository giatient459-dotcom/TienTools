#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(TienToolsMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto menu = this->getChildByID("bottom-menu");
        if (!menu) {
            log::warn("TienTools: bottom-menu was not found; skipping button creation.");
            return true;
        }

        auto sprite = CCSprite::createWithSpriteFrameName("GJ_likeBtn_001.png");
        if (!sprite) {
            log::warn("TienTools: could not create the button sprite.");
            return true;
        }

        auto button = CCMenuItemSpriteExtra::create(
            sprite,
            this,
            menu_selector(TienToolsMenuLayer::onTienToolsButton)
        );
        if (!button) {
            log::warn("TienTools: could not create the menu button.");
            return true;
        }

        button->setID("tientools-button"_spr);
        menu->addChild(button);
        menu->updateLayout();

        log::info("TienTools loaded successfully.");
        return true;
    }

    void onTienToolsButton(CCObject*) {
        FLAlertLayer::create(
            "TienTools",
            "TienTools is loaded! This is a basic Android test mod.",
            "OK"
        )->show();
    }
};
