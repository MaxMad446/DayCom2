package main

// Auto-generated | 2026-05-14T06:12:45.857516
import "fmt"

func Process_635() int {
    base := 298
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_635())
}
