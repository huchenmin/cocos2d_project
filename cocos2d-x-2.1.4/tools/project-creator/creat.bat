@echo off  
set /p projectName=请输入项目名称：  
if "%projectName%"=="" goto inputError  
set /p packageName=请输入包标示名：  
if "%packageName%"=="" goto inputError  
create_project.py -project %projectName% -package %packageName% -language cpp  
pause  
exit  
:inputError  
@echo 项目名称或者包标示名不能为空！  
pause  