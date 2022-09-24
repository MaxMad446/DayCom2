package main

// Auto-generated | 2026-05-14T06:20:32.055929
import "fmt"

func Process_810() int {
    base := 351
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
