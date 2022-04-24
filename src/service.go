package main

// Auto-generated | 2026-05-13T22:10:08.197440
import "fmt"

func Process_158() int {
    base := 415
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_158())
}
