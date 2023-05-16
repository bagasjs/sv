# SV
My own string view implentation in C. The APIs are inspired by Golang's strings package. Some of the code is inspired by [Tsoding's string view](https://github.com/tsoding/sv)

### FAST DOWNLOAD
```console
curl -o sv.h https://raw.githubusercontent.com/bagasjs/sv/main/sv.h
```

### APIs
```c
StringView sv(const char* data);
StringView sv_slice(StringView strv, size_t start, size_t end);

int sv_find_cstr(StringView strv, const char* sth, size_t index);
int sv_find(StringView strv, StringView sth, size_t index);

bool sv_contains(StringView strv, StringView sth);
bool sv_has_prefix(StringView strv, StringView prefix);
bool sv_has_suffix(StringView strv, StringView suffix);
bool sv_eq(StringView a, StringView b);
void sv_split(StringView strv, StringView sep, StringView* results, size_t* results_size);
```