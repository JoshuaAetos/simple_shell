#include "main.h"

/**
 * cd_dot - changes to the parentdirectory
 *
 * @datash: data relevant (environ)
 *
 *Return: no return
*/
void cd_dot(data_shell *datash)
{
char pwd[PATH_MAX];
char *dir, *cp_pwd, *cp_strtok_pwd;
getcwd(pwd, sizeof(pwd));
cp_pwd = _strdup(pwd);
set_env("OLDPWD", cp_pwd, datash);
dir = datash->args[1];
}
