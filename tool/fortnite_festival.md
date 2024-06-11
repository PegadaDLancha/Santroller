---
sort: 5
---
# Configuring for Fortnite Festival Instrument Mode

For instrument mode, it makes the most sense to emulate a keyboard, as this avoids the need for auth on consoles, and avoids a bunch of issues on PC. However, we do see that it is useful to be able to configure both standard guitar inputs and keyboard inputs at the same time.
To support this, we have a concept of "Mode Bindings". This means you can hold a button on your guitar when plugging it onto a PC / console, and it will emulate a keyboard.

Note that if your are on the nintendo switch, the default guitar bindings are configured in such a way that you should be able to remap to usable controls within fortnite festival. Keyboard emulation doesn't actually work on the switch, but that doesn't really matter since you don't need auth to use controller mode.

## How to add the mode binding
1. Hit `Add Setting`
2. Pick `Console Mode Binding`
3. Set `Emulation Mode` to `Fortnite Festival (Instrument Mode)`
4. Pick the correct `Input Type` and then configure the rest of the settings as necessary. You are configuring a button that when held will jump to keyboard emulation mode.
   1. For example, on wii you may do something like this:

      [![Console Mode Wii](/assets/images/screenshots/fnf_console_wii.png)](/assets/images/screenshots/fnf_console_wii.png)

      This would make it so holding green when pluging in the guitar makes the guitar go into the Fortnite Festival keyboard emulation.
   1. For direct you may do something like this:

      [![Console Mode Direct](/assets/images/screenshots/fnf_console_direct.png)](/assets/images/screenshots/fnf_console_direct.png)

      This would make it so holding the button on pin GP4 when pluging in the guitar makes the guitar go into the Fortnite Festival keyboard emulation.
5. If you wish to play on PlayStation, go into `Controller Settings` and make sure the `Rollover Mode` is set to `6KRO`
5. Save your settings
6. Unplug and replug the guitar, holding the input you just configured. Your guitar should show up as a keyboard now.
7. Play festival
8. Unplug and replug the guitar without holding a button to go back to normal mode or to configure.