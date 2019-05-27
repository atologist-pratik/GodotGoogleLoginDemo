#include <core/version_generated.gen.h>
#include "register_types.h"
#include <core/class_db.h>
#include <core/engine.h>
#include "ios/GoogleLogin.h"
#include "core/reference.h"

void register_GoogleGodot_types() {
    Engine::get_singleton()->add_singleton(Engine::Singleton("GoogleGodot", memnew(GoogleGodot)));
}

void unregister_GoogleGodot_types() {
}
