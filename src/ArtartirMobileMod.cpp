#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(ArtartirMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        if (Mod::get()->getSettingValue<bool>("show-message")) {
            FLAlertLayer::create(
                "Artartir Mobile Mod",
                "El mod se cargó correctamente en tu móvil.",
                "OK"
            )->show();
        }

        return true;
    }
};

$on_mod(Loaded) {
    log::info("Artartir Mobile Mod 1.0.0 cargado");
}
