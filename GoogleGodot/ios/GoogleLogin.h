#define GoogleLogin_h
#include <core/class_db.h>
#include <core/object.h>
#include <core/reference.h>

class GoogleGodot : public Object {
    GDCLASS(GoogleGodot, Object);

    static int gCallbackId;
    static void _bind_methods();

public:
    GoogleGodot();
    ~GoogleGodot();

    void init(const String& key);
    void loginGoogle();

};
