#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        if (Mod::get()->getSettingValue<bool>("show-message")) {
            FLAlertLayer::create(
                nullptr,
                "Artartir Mobile Mod",
                "El mod se cargó correctamente en tu móvil",
                "OK",
                nullptr
            )->show();
        }

        log::info("Artartir Mobile Mod - MenuLayer cargado");

        return true;
    }
};

class $modify(PlayLayer) {
    bool init(GJGameLevel* level) {
        if (!PlayLayer::init(level))
            return false;

        log::info("Artartir Mobile Mod - PlayLayer cargado");

        return true;
    }
};

$on_mod(Loaded) {
    log::info("========================================");
    log::info("Artartir Mobile Mod v1.0.0 CARGADO");
    log::info("Usuario: Artartir");
    log::info("========================================");
}
