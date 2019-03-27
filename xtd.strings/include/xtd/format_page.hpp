/// @file
/// @brief Contains doygen format page.

/// @page FormatPage Format Documentation
///
/// @section FormatExpression Format expression
///
/// format : { [<b>id</b>] [<b>,precision</b> | <b>:format</b>] }
///
/// @section IdSection id
///
/// Represent argument identifier. You can specified it or not. If not, it's in automatic mode.
/// If you specify identier, you can use it
///
/// Example with specifying argument identifier :
/// @code
/// cout << string::format("{0}, {1}, {3}", 42, 'c', "word") << endl;
/// cout << strings::format("The {0} we {1} {1} {2} {1}.", "man", "saw", 'a') << endl; // repeated identifier
/// @endcode
///
/// Result
/// @code
/// 42, c, word
/// The man saw saw a saw.
/// @endcode
///
/// Example without specifying argument identifier :
/// @code
/// cout << string::format("{} {} {}", 1, "two", 3.0) << endl;
/// cout << strings::format("{}, {}!", "Hello", "World") << endl;
/// @endcode
///
/// Result
/// @code
/// 1 two 3
/// Hello, World!
/// @endcode
///
/// @section PrecisionSection precision
///
/// * ,precision : Begin with , and contains an integer value positive or negative
///                ** positivie value : pad left
///                ** negative value : pad rigth
/// @par Example
///
/// @code
/// strings.format({0,10}
/// @endcode
///
/// @section FormatSEction format
