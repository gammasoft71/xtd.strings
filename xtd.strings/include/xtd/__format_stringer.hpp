/// @file
/// @brief Contains __format_stringer methods.
#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <chrono>
#include <cctype>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string>

/// @cond
namespace xtd {
  template<typename Value>
  inline std::string to_string(const Value& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const bool& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const int8_t& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const char& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const unsigned char& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const short& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const unsigned short& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const int& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const unsigned int& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const long& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const unsigned long& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const long long& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const unsigned long long& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const float& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const double& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const long double& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const std::chrono::system_clock::time_point& value, const std::string& fmt, const std::locale& loc);
  template<>
  inline std::string to_string(const std::tm& value, const std::string& fmt, const std::locale& loc);

  template<typename Value>
  inline std::wstring to_string(const Value& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const bool& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const int8_t& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const char& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const unsigned char& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const short& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const unsigned short& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const int& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const unsigned int& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const long& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const unsigned long& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const long long& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const unsigned long long& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const float& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const double& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const long double& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const std::chrono::system_clock::time_point& value, const std::wstring& fmt, const std::locale& loc);
  template<>
  inline std::wstring to_string(const std::tm& value, const std::wstring& fmt, const std::locale& loc);
}

template<typename Char, typename Value>
inline std::basic_string<Char> __format_stringer(Value value) {
  std::basic_stringstream<Char> ss;
  ss << value;
  return ss.str();
}

template<>
inline std::string __format_stringer<char, bool&>(bool& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, int8_t&>(int8_t& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, char&>(char& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, unsigned char&>(unsigned char& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, short&>(short& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, unsigned short&>(unsigned short& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, int&>(int& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, unsigned int&>(unsigned int& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, long&>(long& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, unsigned long&>(unsigned long& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, long long&>(long long& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, unsigned long long&>(unsigned long long& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, float&>(float& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, double&>(double& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, long double&>(long double& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, std::chrono::system_clock::time_point&> (std::chrono::system_clock::time_point& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::string __format_stringer<char, std::tm&> (tm& value) {
  return xtd::to_string(value, "G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, bool&>(bool& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, int8_t&>(int8_t& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, char&>(char& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, unsigned char&>(unsigned char& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, short&>(short& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, unsigned short&>(unsigned short& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, int&>(int& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, unsigned int&>(unsigned int& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, long&>(long& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, unsigned long&>(unsigned long& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, long long&>(long long& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, unsigned long long&>(unsigned long long& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, float&>(float& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, double&>(double& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, long double&>(long double& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, std::chrono::system_clock::time_point&> (std::chrono::system_clock::time_point& value) {
  return xtd::to_string(value, L"G", std::locale());
}

template<>
inline std::wstring __format_stringer<wchar_t, std::tm&> (tm& value) {
  return xtd::to_string(value, L"G", std::locale());
}
/// @endcond