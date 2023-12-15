package main

// Auto-generated | 2026-05-13T21:02:33.651972
import "fmt"

func Process_718() int {
    base := 375
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_718())
}
