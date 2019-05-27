#import "GoogleLogin.h"
#import "app_delegate.h"
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <GoogleSignIn/GoogleSignIn.h>



GoogleGodot::GoogleGodot()
{
}

GoogleGodot::~GoogleGodot()
{
}

void GoogleGodot::init(const String& key) {
    NSLog(@"GoogleLogin :) ");
    [GIDSignIn sharedInstance].clientID = [NSString stringWithUTF8String:key.utf8().ptr()];
}

void GoogleGodot::loginGoogle() {
    NSLog(@"GoogleLogin XX ");
}


void GoogleGodot::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("init"), &GoogleGodot::init);
    ClassDB::bind_method(D_METHOD("loginGoogle"), &GoogleGodot::loginGoogle);
}
