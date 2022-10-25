package main

// Auto-generated | 2026-05-14T06:23:05.540056
import "fmt"

func Process_598() int {
    base := 108
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
