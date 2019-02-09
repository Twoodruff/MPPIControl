function [S] = mass_spring_damper_cost_function(x, x_dot, u, param)
    dt = param.dt;
    
    S = (10*(x-1.5)^2 + 2*x_dot^2 )*dt;
    

end
