@echo off  
set /p projectName=��������Ŀ���ƣ�  
if "%projectName%"=="" goto inputError  
set /p packageName=���������ʾ����  
if "%packageName%"=="" goto inputError  
create_project.py -project %projectName% -package %packageName% -language cpp  
pause  
exit  
:inputError  
@echo ��Ŀ���ƻ��߰���ʾ������Ϊ�գ�  
pause  