﻿using System;
namespace Ksat.AppPlugIn.PluginEngine
{
    /// <summary>
    /// 插件信息
    /// </summary>
    [Serializable]
    [System.Runtime.InteropServices.Guid("496626B4-CEF6-40EF-B564-3C0B1AE16091")]
    [System.Runtime.InteropServices.ComVisible(true)]
    public class PluginDescription
    {
        /// <summary>
        /// 创建 PluginDescription class 的新实例
        /// </summary>
        public PluginDescription()
        {
        }

        /// <summary>
        /// 创建 PluginAttribute class 的新实例
        /// </summary>
        public PluginDescription(string author, string contact, string name, string copyRight, string description)
        {
            Author = author;
            Contact = contact;
            Name = name;
            CopyRight = copyRight;
            Description = description;
            DefaultEnabled = true;
        }

        /// <summary>
        /// 创建 PluginAttribute class 的新实例
        /// </summary>
        public PluginDescription(string author, string contact, string name, string copyRight, string description, bool defaultEnabled)
        {
            Author = author;
            Contact = contact;
            Name = name;
            CopyRight = copyRight;
            Description = description;
            DefaultEnabled = defaultEnabled;
        }

        /// <summary>
        /// 作者
        /// </summary>
        public string Author { get; set; }

        /// <summary>
        /// 联系方式
        /// </summary>
        public string Contact { get; set; }

        /// <summary>
        /// 服务名称
        /// </summary>
        public string Name { get; set; }

        /// <summary>
        /// 版权标记
        /// </summary>
        public string CopyRight { get; set; }

        /// <summary>
        /// 功能描述
        /// </summary>
        public string Description { get; set; }

        /// <summary>
        /// 是否默认开启
        /// </summary>
        public bool DefaultEnabled { get; set; }

    }
}
