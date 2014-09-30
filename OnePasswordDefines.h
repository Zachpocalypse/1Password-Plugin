// Keychain location defines
#define kOldKeychainLocation @"~/Library/Application Support/1Password/1Password.agilekeychain"
#define kNewMASKeychainLocation @"~/Library/Containers/com.agilebits.onepassword-osx-helper/Data/Documents/1Password.agilekeychain"
#define kDropboxLocation @"~/Dropbox/1Password/1Password.agilekeychain"
#define kOldDropboxLocation @"~/Dropbox/1Password.agilekeychain"

#define kKeychainPathArray [NSArray arrayWithObjects:kOldKeychainLocation,kNewMASKeychainLocation,kDropboxLocation,kOldDropboxLocation,nil]

// QSObject type defines
#define QS1PasswordForm @"QS1PasswordForm"
#define QS1PasswordSecureNote @"QS1PasswordSecureNote"
#define QS1PasswordIdentity @"QS1PasswordIdentity"
#define QS1PasswordSoftwareLicense @"QS1PasswordSoftwareLicense"
#define QS1PasswordOnlineService @"QS1PasswordOnlineService"
#define QS1PasswordWalletItem @"QS1PasswordWalletItem"

// JSON defines
#define kItemType @"type"

// OnePassword Bundle IDs
#define kOnePasswordMASBundleID @"com.agilebits.onepassword-osx"
#define kOnePasswordOldBundleID @"ws.agile.1Password"

// Key for storing the keychain path in the prefs
#define k1PPath @"QS1PasswordKeychainPath"
