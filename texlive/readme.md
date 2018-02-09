# TeLaTex Unbuntu 16.04 安装相关

## 1 安装命令
	sudo apt-get update
	sudo apt-get install texlive-full
	sudo apt-get install latex-cjk-all 
## 2 中文字体设置
### 2.1安装Windows中文字体

	2.1.1将C:/windows/fonts下你喜欢的字体拷贝到/usr/share/fonts/windows目录下:

	创建windows目录
	sudo mkdir /usr/share/fonts/windows

	2.1.2然后将对应字体拷贝到该目录下（需使用管理员权限sudo执行）

	执行以下几条命令更新系统字体缓存：
	cd /usr/share/fonts/windows/  
	sudo mkfontscale  
	sudo mkfontdir  
	sudo fc-cache -fv