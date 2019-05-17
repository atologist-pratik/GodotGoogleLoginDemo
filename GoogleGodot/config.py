def can_build(env, plat):
    return plat=="iphone"

def configure(env):
    if env['platform'] == "iphone":
        env.Append(FRAMEWORKPATH=['modules/GoogleGodot/ios/'])
        env.Append(LINKFLAGS=['-ObjC', '-bundle', 'GoogleSignIn', '-framework', 'GoogleSignIn', '-framework', 'GoogleSignInDependencies'])
	pass
