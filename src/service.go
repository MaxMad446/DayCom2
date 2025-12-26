package main

// Auto-generated | 2026-05-12T04:40:41.513619
import "fmt"

func Process_290() int {
    base := 342
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
