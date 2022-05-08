<div align=center> <img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/4a64a32e362b4d41806621f2ee5820df~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>
<h2>一、背景</h2>
一次从零开始搞Unity游戏的全新体验，在决定做一个格斗之类的小游戏之后，第一时间开始做人物模型导入的工作，本次比赛游戏赛道有提供模之屋里所有姑娘们的模型素材，于是我第一时间下载了下来然后开始了长达一天的导入Unity之旅。（屑技术力了）      

<h2>二、人物模型</h2>
人物模型网址(可能已经关闭了)：
<a href="" title="">www.aplaybox.com/u/554009131</a>

从模之屋下载的人物素材如下：
<div align=center> <img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/ff40f4cb6544416f8df60bd6fa6db7ac~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>
其中data是人物的法线贴图，可以表现出人物模型的凹凸，没有法线贴图人物就是个白模

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/78956316f8d34377966182483f983c6d~tplv-k3u1fbpfcp-watermark.image?)

spa中是人物的高光贴图，用来模拟光线照射到人物表面时，其表面的属性，比如金属、布料、皮肤等，从而区分不同的材质。
![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/8a3a9779a1994ddc88149d1429a61c63~tplv-k3u1fbpfcp-watermark.image?)

而PMX文件就是模型的主角，PMX是Polygon Model eXtended的简写，是动画软件MikuMikuDance中的模型文件，是.PMD格式（Polygon Model Data）的继承者，所以想要使用然然模型做MMD的可以直接使用，但是Unity支持得只有.fbx和.obj的文件，需要将.pmx文件加以转换后导入

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/2430fba64b9f454c8c2b438598bea281~tplv-k3u1fbpfcp-watermark.image?)
<h2>三、格式转换</h2>
转换这一步我采取了很多种措施，找了很多B战以及论坛帖子的办法，包括Unity插件、转换软件，但是都没有很好的效果，遇到了很多问题，但是最后还是选择了用Blender转换
<h3>1、Blender下载与安装</h3>
首先Blender有他的中文社区，可以直接在里面下载，速度比官网要快

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/8a3fe585191d4ac2bf281332b51eee18~tplv-k3u1fbpfcp-watermark.image?)

下载地址：
<a href="" title="">https://www.blendercn.org</a>

另外可以直接在Steam里安装下载一件解决（但是我Steam下载的Blender出了很多问题，包括无法使用Cats插件操作导出模型等）

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/4019d00ce40c4cb0a007b17c46bbd5f2~tplv-k3u1fbpfcp-watermark.image?)
<h3>2、Cats插件下载与安装</h3>
Blender是一款开源免费的，可进行动画制作渲染的跨平台三维软件，也具有非常丰富的插件生态，这里使用的Cats插件也是开源的
地址：<a href="" title="">https://github.com/GiveMeAllYourCats/cats-blender-plugin</a>

下载安装包解压即可
![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/42fbe6393a534fc18f56692fff1aff70~tplv-k3u1fbpfcp-watermark.image?)

打开Blender

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/e3506c14f82a4d9bb1b31e854ac3092a~tplv-k3u1fbpfcp-watermark.image?)

然后点击Edit/Preferences打开偏好设置窗口

<div align=center> <img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/8926349e8f7447dda6ef8c22272957d2~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>


点击Add-ons然后点击Install and add on

<div align=center> <img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/835c42e794a645d8b98fedeb084903a3~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>
<div align=center> <img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/d7d4fa24d22a473fb3dc15d7a0682b2e~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>


选择下载的压缩包（注意是压缩包）
<div align=center> <img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6e8ff51e7ca84487940177369da30a03~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>



选择完毕后，插件已经添加到Blender中了，需要再勾选上就可以使用了
<div align=center> <img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/51c5d75a2b604adfb89b89f6e4c17518~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>
<div align=center> <img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/69915eecd78d4bcd947c3942a73ed8cf~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

最初我在Steam里安装了最新版本的Blender，成功的导入模型，但是在导出fbx文件中，出现了报错，并且Cats插件的很多操作都会报错，最终是我把版本调低，下载了2.83版本的，使用同样的插件，没有报错。
<h3>3、模型导入</h3>
点击Import Model 选择下载的pmx文件
<div align=center> <img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/65ddf85da9014632a3ebec8d3533c9ee~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

<div align=center> <img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6f366b66910c40c6a6414bb2344330db~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

这个时候导进来的材质是这样的
<div align=center> <img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/dabe428869524fcdbbe73c133465f218~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>
打开侧边栏的Misc，然后点击Shadeless（通用卡通材质）
<div align=center> <img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/5c1613b864534e67a49bd31c300cc6b9~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

这个时候人物模型正常显示了
<div align=center> <img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6528193014fa42f890d2c61b9d2e9a20~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

<h3>4、模型修复</h3>
点击Fix Model，插件可以对模型自动修复，删除多余的节点，最后还会将使用同一张贴图的节点合并为一个Mesh，命名为Body
<div align=center> <img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/67d955d721f94dab8e4e8fe87624cf6e~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

<h3>5、模型导出</h3>
直接点击Export Model即可以导出模型，选择你想要的文件路径保存
<div align=center> <img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/61c8733a76f64cb899fe8d4298787c70~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

<h2>四、Unity导入和设置</h2>
直接将.fbx文件拖入Unity的Project中就可以创建人物模型
<div align=center> <img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/1fc2569898104896aae7eb257e41d639~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

注意这里没有把人物的法线贴图和高亮贴图拖入，所以是白色模型

将data和spa文件夹拖入后再拖入.fbx文件会人物添加材质（所以建议保存.fbx文件时和贴图文件在一个文件夹，一起导入）
<div align=center> <img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6d06ccee2776468995f7a09693c6bd4d~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

此时人物的材质是内嵌到模型里的，并且人物的材质和卡通风格也有很大区别，这里我们把材质导出来，点击fbx的Meaterials窗口，然后把Location设置为Use External Materials，点击Apply
<div align=center> <img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/a6dd0aa83b484562bb909e64363a2c78~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

这时会生成一个Materials文件夹，里面的每个材质都可以进行更改和编辑

<div align=center> <img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/0186caa2feaf44a89b07e241b965dc7b~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>

按ctrl+鼠标左键批量选择材质
将Shader设置成Unlit/Texture，这样就是Blender里的卡通渲染材质了
<div align=center> <img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/4efb2c6b15784ba485494d69daf749f3~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>
<div align=center> <img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c475f61af8ae4d029cf78834665c8591~tplv-k3u1fbpfcp-watermark.image?"/> 
</div>
当然也可以自己编写Shader以及选择现有的Shader给然然不同的渲染效果（技术力还不够，在学了），看到可爱的然然模型一下子有很多动力了。

接下来就是针对人物的骨骼模型和动画重定向了，为了实现最后的动画碰撞效果还是有很多步要走。
<h2>五、相关教程</h2>
Blender中文文档：<a href="" title="">https://docs.blender.org/manual/zh-hans/2.79/about/introduction.html</a>

Unity模型文档：<a href="" title="">https://docs.unity.cn/cn/2019.4/Manual/3D-formats.html</a>
