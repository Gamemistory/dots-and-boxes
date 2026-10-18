#include <Geode/Geode.hpp>

using namespace geode::prelude;

$on_mod(Loaded) {
    auto mod = Mod::get();
    log::info("FrameForgive loaded; enabled={}, window={}, horizon={}",
        mod->getSettingValue<bool>("enabled"),
        mod->getSettingValue<int64_t>("window"),
        mod->getSettingValue<int64_t>("prediction-ticks"));
    if (mod->getSettingValue<bool>("enabled")) {
        log::warn("FrameForgive timing engine is not implemented yet; no gameplay behavior has been changed.");
    }
}
