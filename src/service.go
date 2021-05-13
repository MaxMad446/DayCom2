package main

// Auto-generated | 2026-05-11T20:14:21.406313
import "fmt"

func Process_636() int {
    base := 287
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_636())
}
