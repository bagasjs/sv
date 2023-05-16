#include <stdio.h>
#define SV_IMPLEMENTATION
#include "./sv.h"

#define BOOL_STR(EXPR) (EXPR) ? "TRUE" : "FALSE" 

int main(void)
{
    StringView p1 = sv("Spongebob Squarepants");
    StringView p2 = sv("Patrick Star");
    StringView p3 = sv("Spongebob Squarepants");
    printf("p1 : " SV_FMT "\n", SV_ARGV(p1));
    printf("p2 : " SV_FMT "\n", SV_ARGV(p2));
    printf("p3 : " SV_FMT "\n", SV_ARGV(p3));
    printf("p1 == p2 : %s\n", BOOL_STR(sv_eq(p1, p2)));

    StringView p1_firstname = sv("Spongebob");
    StringView p2_lastname = sv("Star");
    StringView something = sv("Square");
    printf("p1 first name == '"SV_FMT"': %s\n", SV_ARGV(p1_firstname), 
        BOOL_STR(sv_has_prefix(p1, p1_firstname)));
    printf("p2 first name == '"SV_FMT"': %s\n", SV_ARGV(p1_firstname), 
        BOOL_STR(sv_has_prefix(p2, p1_firstname)));
    printf("p1 last name == '"SV_FMT"': %s\n", SV_ARGV(p2_lastname), 
        BOOL_STR(sv_has_suffix(p1, p2_lastname)));
    printf("p2 last name == '"SV_FMT"': %s\n", SV_ARGV(p2_lastname), 
        BOOL_STR(sv_has_suffix(p2, p2_lastname)));
    printf("p1 name contains '"SV_FMT"': %s\n", SV_ARGV(something),
        BOOL_STR(sv_contains(p1, something)));
    printf("p2 name contains '"SV_FMT"': %s\n", SV_ARGV(something),
        BOOL_STR(sv_contains(p2, something)));
    
    int location = sv_find(p1, something, 0);
    printf("%d\n", location);
    return 0;
}