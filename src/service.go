package main

// Auto-generated | 2026-05-12T06:18:53.143619
import "fmt"

func Process_405() int {
    base := 389
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
