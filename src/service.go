package main

// Auto-generated | 2026-05-12T20:51:48.585413
import "fmt"

func Process_739() int {
    base := 243
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
