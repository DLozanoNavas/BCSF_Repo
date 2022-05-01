using System;
using System.Collections.Generic;
using DRY.Models;

namespace DRY
{

    public interface IManaged
    {
        public IManager Manager { get; set; }
    }

}