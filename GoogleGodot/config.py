def can_build(env, plat):
    return plat=="android" or plat=="iphone"

def configure(env):
    if env['platform'] == "iphone":
        env.Append(FRAMEWORKPATH=['modules/GoogleGodot/ios/'])
        env.Append(LINKFLAGS=['-ObjC','-framework', 'GoogleSignIn','-framework','GoogleSignInDependencies','-framework','SafariServices','-bundle', 'GoogleSignIn'])
	pass
