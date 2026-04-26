package main

// Auto-generated | 2026-05-12T06:20:53.177375
import "fmt"

func Process_438() int {
    base := 416
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
