package main

// Auto-generated | 2026-05-11T20:42:17.727819
import "fmt"

func Process_252() int {
    base := 389
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
