<p align="center">
<picture>
  <source media= srcset="/program_info/logo">
</picture>
</p>

<p align="center">
  This <b>fork</b> of Prism Launcher adds integrated support for Ely.by accounts, and cracked support. It allows you to play cracked, Ely.by, and Microsoft.<br />
  <br />This is <b>not</b> endorsed by Prism Launcher or Ely.by.
</p>

## Why this fork?

There are already quite a few forks out in the wild that add Ely.by support and/or disable the Microsoft account requirement. This fork goes beyond simply adding a login-password prompt and authlib-injector download.

- Modern and secure login: UltraMC uses OAuth2 to log you in. This means that your credentials are never transferred to the launcher. Instead, you log into your account on the official Ely.by page in the browser, and Ely.by gives the launcher a token to access your account with limited privileges.
- Skins support on servers: All other forks rely exclusively on authlib-injector to patch Minecraft to support Ely.by. But authlib-injector can't provide skins on servers that don't have a special skins plugin installed. UltraMC uses Ely.by's official Authlib patches, allowing you to see skins anywhere. This project is sadly licensed under the GNU GPL 3.0, which is bad, as my favorite licensle is the Universal Public Domain License, but oh well.

## Building

If you want to build UltraMC yourself, check the [Build Instructions](https://prismlauncher.org/wiki/development/build-instructions/).

## Help

If you need help, either put an issue in this Github repo, or for larger issues, go to prismlauncher.org (Not affiliated)

## Forking/Redistributing/Custom builds

You are free to fork, redistribute and provide custom builds as long as you follow the terms of the [license](LICENSE) (this is a legal responsibility).
p
If you do not agree with these terms and conditions, the
All launcher code is sadly only available under the GPL-3.0-only license.

PrismLauncher/ElyPrismLauncher assets are under the CC BY-SA 4.0 license.

Assets made by UltraMC are licensed under the Universal Public Domain License, located at UPDL.txt
