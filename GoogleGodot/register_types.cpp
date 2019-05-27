#include <core/version_generated.gen.h>
#include <core/reference.h>
#include <core/class_db.h>
#include <core/engine.h>
#include "register_types.h"
#include "ios/GoogleLogin.h"


void register_GoogleGodot_types() {
    Engine::get_singleton()->add_singleton(Engine::Singleton("GoogleGodot", memnew(GoogleGodot)));
}

void unregister_GoogleGodot_types() {
}
