function [Stk,delta_u,x]=sample_MPPI_MGCM(...
                            k,N,variance,Stk,...
                            x,delta_u,u,...
                            x_s,Q,R,dt...
                            )
            for i = 1:N-1
                delta_u(i,k) = variance*(randn(1));
                x(:,i+1) = x(:,i) + MGCM_Dynamics(x(:,i),(u(i)+ delta_u(i,k)),dt);
                
                Stk(k) = Stk(k) + cost_function_mgcm(x(:,i),...
                    (u(i)+ delta_u(i,k)),...
                    x_s,Q, R,dt);

            end
end % end function