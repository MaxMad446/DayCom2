package main

// Auto-generated | 2026-05-13T20:58:41.227357
import "fmt"

func Process_329() int {
    base := 385
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_329())
}
