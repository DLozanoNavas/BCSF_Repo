using System;
using System.Collections.Generic;
using DRY.Models;

namespace DRY{

    public interface IManager {
        public List<IManaged> Empleados { get; set; }

    }

}