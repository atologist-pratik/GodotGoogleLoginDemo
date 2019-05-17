//#include <version_generated.gen.h>
#include "register_types.h"
#include <core/class_db.h>
#include <core/engine.h>
#include "ios/GoogleLogin.h"

void register_GoogleGodot_types() {
#if defined(__APPLE__)
    Engine::get_singleton()->add_singleton(Engine::Singleton("GoogleGodot", memnew(GoogleGodot)));
#endif
}

void unregister_GoogleGodot_types() {
}
