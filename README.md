![ƀ](/images/icon.png) breadwallet
---------------------------------

A [BIP32](https://github.com/vertcoin/bips/blob/master/bip-0032.mediawiki)
deterministic vertcoin wallet for iOS

![screenshot1](/images/screenshot1.jpg)

breadwallet is designed to be the most secure and user friendly vertcoin wallet
for iOS. It is a "deterministic" wallet, meaning that all the vertcoin addresses
and private keys are generated from a single "seed". If you know the seed, you
can recreate the entire wallet including all balances and transaction history.
This allows for a single convenient backup that will work forever.

![screenshot3](/images/screenshot3.jpg)

Wallet seeds are securely stored on the iOS keychain and never leave the device.
They are never stored on any server. Your private keys are generated from your
seed as needed and then immediately wiped from memory. Additionally, iOS
keychain data persists even if the app is deleted. If you accidentally delete
breadwallet and reinstall it, your wallet will be automatically recreated from
the seed stored on the keychain. (Be sure to do a factory reset if you sell or
give away your device!)

The seed is also encoded into a non-sense english phrase, which is your
"wallet backup phrase". Never let anyone see your backup phrase or they will
have access to your wallet. Write it down and store it in a safe place. In the
event your device is damaged or lost you can restore your wallet on a new device
using your backup phrase. Be sure to enable a passcode on your device and use
[remote erase](http://www.apple.com/icloud/find-my-iphone.html#activation-lock)
if it is lost or stolen. Future versions of breadwallet will also include a
secondary passcode on the app itself.

breadwallet uses "simplified payment verification" or
[SPV](https://en.vertcoin.it/wiki/Thin_Client_Security#Header-Only_Clients) mode
for fast performance in a mobile environment.

![screenshot2](/images/screenshot2.jpg)

breadwallet is open source and available under the terms of the MIT license.
Source code is available at https://github.com/voisine/breadwallet

**WARNING:** installation on jailbroken devices is strongly discouraged

Any jailbreak app can grant itself keychain entitlements to your wallet seed and
rob you by self-signing as described [here](http://www.saurik.com/id/8) and
including `<key>application-identifier</key><string>org.voisine.*</string>` in
its .entitlements file.
