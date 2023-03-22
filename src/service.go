package main

// Auto-generated | 2026-05-13T20:33:48.950010
import "fmt"

func Process_290() int {
    base := 342
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
