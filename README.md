PrimeTime – Minimalist Arduino Study Timer

PrimeTime is a simple, distraction-free study timer built with an Arduino. It uses a single button and an LED to help students stay focused, without relying on apps or screens.

## Inspiration
As students, we often rely on our phones or apps for study timers but those same devices are full of distractions. We wanted a simple, tangible solution that helps students focus without screens. That’s how PrimeTime was born: a minimalist Arduino-based study timer that keeps you in the zone with just one button and an LED.

## What it does
PrimeTime is a compact timer device that lights up an LED for a preset study duration when you press a button. The LED stays on during your focus session and turns off automatically when time’s up--no distractions, no apps, just pure focus.

## How we built it
We built PrimeTime using an Arduino Nano, an LED, a button, and simple embedded C++ code. The code detects button input, activates the LED, and maintains precise timing control using delay functions. The design emphasizes simplicity, allowing anyone to adjust the timer duration easily in code.

## Challenges we ran into
Building the Arduino itself came with a learning curve. Wiring the LED and button correctly and ensuring stable connections on the breadboard was a bit challenging since it took a while to figure out.

## Accomplishments that we're proud of
We’re proud that PrimeTime delivers consistent, 99-100% accurate timing in a compact, beginner-friendly project. It’s reliable, visually simple, and genuinely helpful for maintaining focus during study sessions. We also kept the entire project lightweight and easy to replicate.

## What we learned
Through PrimeTime, we learned how to implement C++ in a embedded system (Arduino) and design a physical product that serves a real purpose. We also gained hands-on experience understanding hardware-software interaction.

## What's next for PrimeTime
Next, we plan to expand PrimeTime by adding customizable time intervals, buzzer notifications, and maybe even Bluetooth or app integration for session tracking. The goal is to evolve it from a simple LED timer into a smart, productivity-focused companion for students.
