#include <macro/keyboard.h>

#include <stdexcept>

namespace Macro {
namespace Keyboard {

std::string GetKeyName(Key key) {
    switch (key) {
        case Key::BACKSPACE: return "BACKSPACE";
        case Key::TAB: return "TAB";
        case Key::ENTER: return "ENTER";
        case Key::SHIFT: return "SHIFT";
        case Key::CTRL: return "CTRL";
        case Key::ALT: return "ALT";
        case Key::PAUSE: return "PAUSE";
        case Key::CAPS_LOCK: return "CAPS_LOCK";
        case Key::ESCAPE: return "ESCAPE";
        case Key::SPACE: return "SPACE";
        case Key::PAGE_UP: return "PAGE_UP";
        case Key::PAGE_DOWN: return "PAGE_DOWN";
        case Key::END: return "END";
        case Key::HOME: return "HOME";
        case Key::LEFT_ARROW: return "LEFT_ARROW";
        case Key::UP_ARROW: return "UP_ARROW";
        case Key::RIGHT_ARROW: return "RIGHT_ARROW";
        case Key::DOWN_ARROW: return "DOWN_ARROW";
        case Key::SELECT: return "SELECT";
        case Key::PRINT: return "PRINT";
        case Key::EXECUTE: return "EXECUTE";
        case Key::PRINT_SCREEN: return "PRINT_SCREEN";
        case Key::INSERT: return "INSERT";
        case Key::DELETE: return "DELETE";
        case Key::HELP: return "HELP";
        case Key::ZERO: return "ZERO";
        case Key::ONE: return "ONE";
        case Key::TWO: return "TWO";
        case Key::THREE: return "THREE";
        case Key::FOUR: return "FOUR";
        case Key::FIVE: return "FIVE";
        case Key::SIX: return "SIX";
        case Key::SEVEN: return "SEVEN";
        case Key::EIGHT: return "EIGHT";
        case Key::NINE: return "NINE";
        case Key::A: return "A";
        case Key::B: return "B";
        case Key::C: return "C";
        case Key::D: return "D";
        case Key::E: return "E";
        case Key::F: return "F";
        case Key::G: return "G";
        case Key::H: return "H";
        case Key::I: return "I";
        case Key::J: return "J";
        case Key::K: return "K";
        case Key::L: return "L";
        case Key::M: return "M";
        case Key::N: return "N";
        case Key::O: return "O";
        case Key::P: return "P";
        case Key::Q: return "Q";
        case Key::R: return "R";
        case Key::S: return "S";
        case Key::T: return "T";
        case Key::U: return "U";
        case Key::V: return "V";
        case Key::W: return "W";
        case Key::X: return "X";
        case Key::Y: return "Y";
        case Key::Z: return "Z";
        case Key::NUMPAD0: return "NUMPAD0";
        case Key::NUMPAD1: return "NUMPAD1";
        case Key::NUMPAD2: return "NUMPAD2";
        case Key::NUMPAD3: return "NUMPAD3";
        case Key::NUMPAD4: return "NUMPAD4";
        case Key::NUMPAD5: return "NUMPAD5";
        case Key::NUMPAD6: return "NUMPAD6";
        case Key::NUMPAD7: return "NUMPAD7";
        case Key::NUMPAD8: return "NUMPAD8";
        case Key::NUMPAD9: return "NUMPAD9";
        case Key::MULTIPLY: return "MULTIPLY";
        case Key::ADD: return "ADD";
        case Key::SEPARATOR: return "SEPARATOR";
        case Key::SUBTRACT: return "SUBTRACT";
        case Key::DECIMAL: return "DECIMAL";
        case Key::DIVIDE: return "DIVIDE";
        case Key::F1: return "F1";
        case Key::F2: return "F2";
        case Key::F3: return "F3";
        case Key::F4: return "F4";
        case Key::F5: return "F5";
        case Key::F6: return "F6";
        case Key::F7: return "F7";
        case Key::F8: return "F8";
        case Key::F9: return "F9";
        case Key::F10: return "F10";
        case Key::F11: return "F11";
        case Key::F12: return "F12";
        case Key::NUM_LOCK: return "NUM_LOCK";
        case Key::SCROLL_LOCK: return "SCROLL_LOCK";
        case Key::LSHIFT: return "LSHIFT";
        case Key::RSHIFT: return "RSHIFT";
        case Key::LCTRL: return "LCTRL";
        case Key::RCTRL: return "RCTRL";
        case Key::LALT: return "LALT";
        case Key::RALT: return "RALT";
        case Key::LSUPER: return "LSUPER";
        case Key::RSUPER: return "RSUPER";
        case Key::MENU: return "MENU";
        case Key::COLON: return "COLON";
        case Key::PLUS: return "PLUS";
        case Key::COMMA: return "COMMA";
        case Key::MINUS: return "MINUS";
        case Key::PERIOD: return "PERIOD";
        case Key::SLASH: return "SLASH";
        case Key::TILDE: return "TILDE";
        case Key::LEFT_BRACKET: return "LEFT_BRACKET";
        case Key::BACKSLASH: return "BACKSLASH";
        case Key::RIGHT_BRACKET: return "RIGHT_BRACKET";
        case Key::QUOTE: return "QUOTE";
        case Key::OEM_8: return "OEM_8";
        case Key::OEM_102: return "OEM_102";
        default: throw std::runtime_error(std::string("Unknown key (GetKeyName): ") + std::to_string(key));
    }
}

}  // namespace Keyboard
}  // namespace Macro