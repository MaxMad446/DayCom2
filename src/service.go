package main

// Auto-generated | 2026-05-14T06:11:57.698671
import "fmt"

func Process_477() int {
    base := 273
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_477())
}
